class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []
        n = len(nums)
        for i in range(n):
            if nums[i] > 0 : # if the i number is greater than 0 theres no point in squeeze
                break
            if i > 0 and nums[i] == nums[i-1] : # if the i number is greater than 0 theres no point in squeeze
                continue

            lo, hi = i + 1, n - 1
            while lo < hi:
                sum = nums[i] + nums[lo] + nums[hi]

                if sum == 0:
                    result.append([nums[i], nums[lo], nums[hi]])
                    while lo < hi and nums[lo] == nums[lo + 1] : # if the next lo is a duplicate, increase lo to skip
                        lo += 1
                    while lo < hi and nums[hi] == nums[hi - 1] : # if the next hi is a duplicate, decrease hi to skip
                        hi -= 1

                    lo = lo + 1 # this will be the part where u skip to one after the duplicate, or just increment lo if the sum was valid
                    hi = hi - 1 # this will be the part where u skip to one before the duplicate, or just decrement hi if the sum was valid
                
                elif sum < 0:
                    lo += 1
                
                else:
                    hi -= 1
        return result


            

        