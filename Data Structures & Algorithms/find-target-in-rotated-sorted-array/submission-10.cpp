class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;

        while (l <= r){

            int mid = (l + r) / 2;

            for (int i : nums) printf("%d ", i);
            printf("\nl: %d   r: %d   mid: %d", l, r, mid);

            if (nums[mid] == target){
                return mid;
            }
            if (nums[mid] >= nums[l]){ //in left
                if (target < nums[l] || target > nums[mid]){
                    l = mid + 1;
                    
                }
                else {
                    r = mid - 1;
                }
            }
            else { // in right
                if (target > nums[r] || target < nums[mid]){
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }            
            }
        
       }
        return -1;
    }
};
