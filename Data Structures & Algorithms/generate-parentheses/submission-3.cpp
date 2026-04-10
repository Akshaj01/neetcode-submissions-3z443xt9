class Solution {
public:
    vector<string> res;
    string curr = "";

    void backtrack(int n, int open, int closed){
            if (open == n && closed == n){
                    res.push_back(curr);
            }

            if (open < n){
                curr += "(";
                backtrack(n, open+1, closed);
                curr.pop_back();
            }
            if (closed < open){
                curr += ")";
                backtrack(n, open, closed+1);
                curr.pop_back();
            }
    }

    vector<string> generateParenthesis(int n) {
        //open condition: if under 3 
        //close condition: if under 3 and closed less than opens
        //if n = open = closed
        backtrack(n,0,0);
        return res;
    }
};
