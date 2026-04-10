class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res = {};
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++){
            int j = i + 1;
            int k = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j + 1] == nums[j]){
                        j++;
                        continue;
                    }
                    while (j < k && nums[k -1 ] == nums[k]){
                        k--;
                        continue;
                    }
                    j++;
                    k--;
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
