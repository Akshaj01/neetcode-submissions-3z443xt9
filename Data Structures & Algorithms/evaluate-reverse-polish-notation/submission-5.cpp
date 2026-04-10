class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (string c : tokens){
            if (c != "+" && c != "-" && c != "*" && c != "/") {
                nums.push(stoi(c));
            }

            else {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                if (c == "+") nums.push( a + b);
                else if (c == "-") nums.push( a - b);
                else if (c == "*") nums.push( a * b);
                else nums.push( a / b);

            }
            
        }
        return nums.top();
    }
};
