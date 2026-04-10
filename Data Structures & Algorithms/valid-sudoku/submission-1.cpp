class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char> > boxes;
        for (int i = 0; i < 9; i++){
            unordered_set<char> row;
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                if (row.count(board[i][j])){
                    return false;
                }
                row.insert(board[i][j]);
            }
        }

        for (int i = 0; i < 9; i++){
            unordered_set<char> col;
            for (int j = 0; j < 9; j++){
                if (board[j][i] == '.'){
                    continue;
                }
                if (col.count(board[j][i])){
                    return false;
                }
                col.insert(board[j][i]);
            }
        }

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                int b = (i / 3) * 3 + (j / 3);
                if (board[i][j] == '.'){
                    continue;
                }
                if (boxes[b].count(board[i][j])){
                    return false;
                }
                boxes[b].insert(board[i][j]);
            }
        }




        return true;
    }
};
