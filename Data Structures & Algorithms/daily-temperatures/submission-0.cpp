class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> myStack;
        vector<int> res(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++){
            while (!myStack.empty() && temperatures[i] > temperatures[myStack.top()]){
                res[myStack.top()] = i - myStack.top();
                myStack.pop();
            }
            myStack.push(i);
        }
        return res;
    }
};
