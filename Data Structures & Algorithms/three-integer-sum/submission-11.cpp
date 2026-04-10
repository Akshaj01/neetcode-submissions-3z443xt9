class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < (int)nums.size() - 2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (nums[j] == nums[j-1] && (j < k)) j++;
                    while (nums[k] == nums[k+1] && (j < k)) k--;
                }

                else if (sum < 0){
                    j++;
                }
                else {
                    k--;
                }
            }

        }
        return res;
    }
};
