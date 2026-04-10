class MinStack {
private:
      stack<int> mainStack;
      stack<int> minStack2;   
      int currmin = 100000;

public:
    MinStack() {
    }
    
    void push(int val) {
        mainStack.push(val);
        if (minStack2.empty()){
            minStack2.push(val);
        }
        else {
            minStack2.push(min(minStack2.top(), val));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack2.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack2.top();
    }
};
