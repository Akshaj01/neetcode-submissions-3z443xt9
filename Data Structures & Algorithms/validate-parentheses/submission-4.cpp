class Solution {
public:
    bool isValid(string s) {
        stack<char> openStack;
        unordered_map<char, char> closeToOpen = { {')', '('}, {']', '['}, {'}', '{'}};
        for (char c: s){
            if (closeToOpen.count(c)){ // if closing bracket
                if (openStack.empty() || closeToOpen[c] != openStack.top()){
                    return false;
                }
                openStack.pop();
            }
            else { // if open bracket
                openStack.push(c);
            }
        }
        return openStack.empty();
    }
};
