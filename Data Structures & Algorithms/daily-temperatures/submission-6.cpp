class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> st;

        for (int i = 0; i < temperatures.size(); i++){

            while (!st.empty() && temperatures[i] > temperatures[st.top()]){
                int prev = st.top();
                st.pop();
                int diff = i - prev;
                res[prev] = diff;
            }

            st.push(i);
        }

        return res;

    }


    
};
