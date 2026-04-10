class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        prefix[0] = 1;
        for(int p = 1; p < nums.size(); p++){
            prefix[p] = prefix[p-1] * nums[p-1];
        }

        suffix[nums.size() - 1] = 1;
        for(int s = nums.size() - 2; s >= 0; s--){
            suffix[s] = suffix[s+1] * nums[s+1];
        }

        vector <int> res(nums.size());
        for (int i = 0; i < nums.size(); i++){
            res[i] = prefix[i] * suffix[i];
        }
        return res;
    }
};
