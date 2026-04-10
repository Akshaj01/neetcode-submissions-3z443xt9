class Solution {
public:
    bool isValid(string s) {
        stack<char> openStack;
        unordered_map<char, char> closedToOpen = { {')' , '('}, {']' , '['}, {'}' , '{'} };
        for (int i = 0; i < s.size(); i++){
            if (closedToOpen.find(s[i]) == closedToOpen.end()){ // open
                openStack.push(s[i]);
            }
            else { // close
                if (openStack.empty()){
                    return false;
                }
                if (closedToOpen[s[i]] == openStack.top()){
                    openStack.pop();
                }
                else {
                    return false;
                }

            }
        }
        if (!openStack.empty()){
            return false;
        }
        return true;
    }
};
