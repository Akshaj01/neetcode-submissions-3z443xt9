class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector< vector<string> > res;
        unordered_map < string, vector<string> > freqMap;
        for (string s : strs){
            vector<int> currFreqCount(26);
            for (char c : s){
                currFreqCount[c - 'a']++;
            }
            string key;
            for (int i = 0; i < 26; i++){
                key += to_string(currFreqCount[i]);
                key += ',';
            }
            freqMap[key].push_back(s);
        }
        for (auto & pair : freqMap){
            res.push_back(pair.second);
        }
        return res;
    }
};
