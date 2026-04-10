class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> tempStack;
        //if current temp greater than top stack, add diff to res
        //keep popping till not then add val to stack
        for (int i = 0; i < temperatures.size(); i++){
            while (!tempStack.empty() && temperatures[tempStack.top()] < temperatures[i]){
                int diff = i - tempStack.top();
                result[tempStack.top()] = diff;
                tempStack.pop();
            }
            tempStack.push(i);
            }
        return result;
        }
        
};
