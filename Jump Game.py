class Solution(object):
  def canJump(self,nums):
    farthest=0
    
    for i in range(len(nums)):
      if i>farthest:
        return False
      
      reach=i+nums[i]
      
      if reach>farthest:
        farthest=reach
    return True
