class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap; //hashmap for the frequency of numbers
        vector< vector<int> > freqBuckets(nums.size()+1); //array w buckets for each frequency
        int highestFreq = 0;

        for (int num: nums){
            freqMap[num]++;
            highestFreq = max(highestFreq , freqMap[num]);
        }

        for (auto& pair: freqMap){
            freqBuckets[pair.second].push_back(pair.first);
        }

        vector <int> result;
        for (int freq = highestFreq; freq > 0; freq--  ){
            for (int i = 0; i < freqBuckets[freq].size(); i++){
                if (result.size() == k){
                    return result;
                }
                result.push_back(freqBuckets[freq][i]);
            }
        }
        return result;
    }
    
};
