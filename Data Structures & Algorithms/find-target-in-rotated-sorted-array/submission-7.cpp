class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        //find pivot
        while (l < r){
            int mid = (l+r) / 2;
             if (nums[mid] == target) return mid;
            if (nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        int pivot = l;
        l = 0;
        r = n - 1;
        while (l <= r){
            int mid = (l+r) / 2;
            int truemid = (mid + pivot) % n;
            if (nums[truemid] == target) return truemid;
            if (nums[truemid] > target) r = mid - 1;
            else l = mid + 1;
        }

        return -1;
    }
};
