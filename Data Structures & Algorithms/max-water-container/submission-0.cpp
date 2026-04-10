class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxArea = 0;
        while ( l < r){
            int minHeight = min(heights[l], heights[r]);
            int area = (r - l) * minHeight;
            if (area > maxArea){
                maxArea = area;
            }
            if (minHeight == heights[l]){
                l++;
            }
            else {
                r--;
            }
        }
        return maxArea;
    }
};
