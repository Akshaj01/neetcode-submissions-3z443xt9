class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; //map for char to count
        unordered_map<int, vector<int>> frequencyMap; // frequency to numbers
        vector<int> res; // result
        for (int i : nums){ //count how many times each number happens
            count[i]++;
        }

        for (auto & p : count){ // put each number in its count bucket
            frequencyMap[p.second].push_back(p.first);
        }

        for (int freq = nums.size(); freq >= 0; freq--){ //for each bucket starting at size of nums
            for (int num : frequencyMap[freq]){ //for each number in the freq bucket
                res.push_back(num); //push to result
                if (res.size() == k){ // if result is k long
                    return res; //return
                }
            }               
        }
        return {-1, -1};
        
    }
};
