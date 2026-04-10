class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> char_map;

         if (s.length() != t.length()) return false;

         for (int i = 0; i < s.length(); i++){
            char_map[s[i]]++;
            char_map[t[i]]--;
         }

         for (auto& c : char_map){
            if (c.second != 0) return false;
         }
         return true;
    }
};
