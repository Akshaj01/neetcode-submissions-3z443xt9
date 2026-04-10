class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            int left = 1;
            for (int j = 0; j < i; j++){
                left = left * nums[j];
            }
            int right = 1;
            for (int j = i + 1; j < nums.size(); j++){
                right = right * nums[j];
            }
            int product = left * right;
            result.push_back(product);
        }

        return result;
    }
};
