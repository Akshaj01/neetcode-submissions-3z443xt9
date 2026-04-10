class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<pair<int, int>> myStack;
        for (int i = 0; i < heights.size(); i++){
            // if stack empty add current height
            if (myStack.empty()){
                myStack.push({heights[i], i});
            }
            else {
                //if this height is smaller than last height get last height area
                int start = i;
                while (!myStack.empty() && heights[i] < myStack.top().first){
                    int area = myStack.top().first * ( i - myStack.top().second);
                    maxArea = max(maxArea, area);
                    auto [h, idx] = myStack.top();
                    start = idx;
                    myStack.pop();
                }
                myStack.push({heights[i], start});
            }
        }
        //remaining stack processing
        while (!myStack.empty()){
            auto [h, idx] = myStack.top();
            int area = h * (heights.size() - idx);
            maxArea = max(maxArea, area);
            myStack.pop();
        }

        return maxArea;
    }
};
