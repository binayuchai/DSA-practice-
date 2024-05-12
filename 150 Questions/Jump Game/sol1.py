# Input: nums = [2,3,1,1,4]



def canJump(nums):
    i=0
    if len(nums) == 1:
        return True
    
    check_up_to = len(nums) - 1
    
    while i < check_up_to:
       if nums[i] >= (len(nums)-i-1):
            return True
       i = i+1
    return False


ans = canJump([3,2,1,0,4])
print(ans)
    