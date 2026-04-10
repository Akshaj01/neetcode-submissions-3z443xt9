class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int r, int target){
        int mid = (l+r)/2;

        //base case
        if (l>r){
            if (nums[mid] == target){
                return mid;
            }
            else {
                return -1;
            }
        }
        //recursive case
        if (target == nums[mid]){ //found answer
            return mid;
        }

        else if (target > nums[mid]){ //target to the right
            l = mid + 1; 
            binarySearch(nums, l, r, target);
        }

        else { //target to the left
            r = mid - 1;
            binarySearch(nums, l, r, target);
        }


    }

    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        binarySearch(nums, l, r, target);
    }
};
