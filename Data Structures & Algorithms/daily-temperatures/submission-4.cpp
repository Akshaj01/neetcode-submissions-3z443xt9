class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> monotonicStack;
        //if current temp greater than top stack, add diff to res
        for (int i = 0; i < temperatures.size(); i++){
            if (monotonicStack.empty()){ //if stack is empty
                monotonicStack.push(i);
            }
            else if (temperatures[i] <= temperatures[monotonicStack.top()]){ //if temp[i] < temp[top]
                monotonicStack.push(i);
            }
            else {
                while (!monotonicStack.empty() && temperatures[i] > temperatures[monotonicStack.top()]){ 
                    int diff = i - monotonicStack.top();
                    res[monotonicStack.top()] = diff;
                    monotonicStack.pop();
                }
                monotonicStack.push(i);
                
            }
        }
        while (!monotonicStack.empty()){
            res[monotonicStack.top()] = 0;
            monotonicStack.pop();
        }

        return res;
    }
};
