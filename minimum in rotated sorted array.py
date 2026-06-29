class Solution(object):
    def findMin(self, nums):
        low, high = 0, len(nums) - 1
        
        while low < high:
            mid = low + (high - low) // 2
            
            # Minimum is in the right un-sorted portion
            if nums[mid] > nums[high]:
                low = mid + 1
            # Minimum is at mid or in the left portion
            else:
                high = mid
                
        return nums[low]
