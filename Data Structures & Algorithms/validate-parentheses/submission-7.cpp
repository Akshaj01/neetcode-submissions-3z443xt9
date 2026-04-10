class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> closedToOpen = {{'}' , '{'}, {']' , '['}, {')' , '('} };
        stack<char> openStack;
        for (char c: s){
            if (closedToOpen.count(c) && !openStack.empty()){
                if (closedToOpen[c] != openStack.top()){
                    return false;
                }
                openStack.pop();
            }
            else {
                openStack.push(c);
            }
        }
        if (!openStack.empty()){
            return false;
        }
        return true;
    }
};
