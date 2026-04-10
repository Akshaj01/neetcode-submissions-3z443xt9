class Solution {

public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        vector<int> pre(nums.size(), 1);
        vector<int> post(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++){
            pre[i] = pre[i-1] * nums[i-1];
            res[i] = pre[i];
        }
        for (int i = nums.size() - 2; i >= 0; i--){
            post[i] = post[i+1] * nums[i+1];
            res[i] = res[i] * post[i];
        }
        return res;
};
};
