class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);

        for (int p = 1; p < nums.size(); p++){
            res[p] = nums[p-1] * res[p-1];
        }

        int suffix = 1;
        for(int s = nums.size() - 1; s >= 0; s--){
            res[s] = res[s] * suffix;
            suffix = suffix * nums[s];
        }

        return res;
    }
};
