class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int maxLen = 0;
        for (int i = 0; i < nums.size(); i++){
            seen.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++){
            int currLen = 1;
            if (!seen.count(nums[i] - 1)){
                while (seen.count(nums[i] + currLen)){
                    currLen++;
                }
            } 
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};
