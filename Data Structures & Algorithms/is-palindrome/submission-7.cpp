class Solution {

public:
    bool isalphanum(char c){
        if (
            (c >= '0') && (c <= '9' ) ||
            (c >= 'a') && (c <= 'z' ) ||
            (c >= 'A') && (c <= 'Z' ) 
        ){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r){
            if (!isalphanum(s[l])){
                l++;
                continue;
            }
            if (!isalphanum(s[r])){
                r--;
                continue;
            }
            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
