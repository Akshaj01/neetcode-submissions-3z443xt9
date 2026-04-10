class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> buckets;
        for (int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            buckets[key].push_back(strs[i]);
        }
        for (auto & pair: buckets){
            res.push_back(pair.second);
        }
        return res;
    }
};
