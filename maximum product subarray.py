class Solution(object):
    def maxProduct(self, nums):
        if not nums:
            return 0
        max_prod=min_prod=result=nums[0]
        for i in range(1,len(nums)):
            choices=(nums[i], max_prod*nums[i],min_prod*nums[i])
            max_prod=max(choices)
            min_prod=min(choices)
            result=max(result,max_prod)
        return result
