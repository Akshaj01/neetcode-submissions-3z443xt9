class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> numToFreq;
        unordered_map<int, vector<int>> freqBuckets;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++){
            numToFreq[nums[i]]++; //increment the count for curr num
        }
        for (const auto &pair : numToFreq){
            freqBuckets[pair.second].push_back(pair.first);
        }
        for (int i = n; i >= 0 && res.size() < k; i--){
            for (int n : freqBuckets[i]){
                res.push_back(n);
                if (res.size() >= k){
                    break;
                }
            }
        }
        return res;
    }
};
