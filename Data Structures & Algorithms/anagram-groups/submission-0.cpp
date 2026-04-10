class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> map;
       for (string s: strs){
        string sortedS = s;
        sort(sortedS.begin(), sortedS.end());
        map[sortedS].push_back(s);
       }

        vector<vector<string>> answer;
        for (auto& pair: map){
            answer.push_back(pair.second);
        }
        return answer;

    }
};
