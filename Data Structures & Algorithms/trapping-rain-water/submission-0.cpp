class Solution {
public:
    int trap(vector<int>& height) {

        int l = 0;
        int r = height.size() - 1;
        int maxl = height[l];
        int maxr = height[r];
        int sum = 0;
        while (l < r){
            if (maxl <= maxr){
                l++;
                int currValue = maxl - height[l];
                int waterAmount = (currValue > 0) ? currValue : 0;
                sum += waterAmount;
                maxl = max(height[l], maxl);
                

            }
            else {
                r--;
                int currValue = maxr - height[r];
                int waterAmount = (currValue > 0) ? currValue : 0;
                sum += waterAmount;
                maxr = max(height[r], maxr);
                
            }
        }
        return sum;
    }
};
