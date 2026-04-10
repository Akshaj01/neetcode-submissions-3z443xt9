class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> sortedToStrings;
        for (string s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            sortedToStrings[sorted_s].push_back(s);
        }

        for (auto & pair : sortedToStrings){
            res.push_back(pair.second);
        }
        return res;
    }
};
