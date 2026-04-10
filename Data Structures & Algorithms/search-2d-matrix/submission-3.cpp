class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int bot = 0;
        int top = matrix.size() - 1;
        int l = 0;
        int r = matrix[0].size() - 1;
        int row = 0;
        while (bot <= top){
            row = (bot + top) / 2;
            if (target < matrix[row][l]){
                top = row - 1;
            }
            else if (target > matrix[row][r]){
                bot = row + 1;
            }
            else {
                break; //row is good
            }
        }

        while (l <= r){
            int mid = (l + r) / 2;
            if (target > matrix[row][mid]){
                l = mid + 1;
            }
            else if (target < matrix[row][mid]){
                r = mid - 1;
            }
            else {
                return true; //row is good
            }
        }
        return false;
    }
};
