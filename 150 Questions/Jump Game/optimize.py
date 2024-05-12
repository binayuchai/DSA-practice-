# Input: nums = [2,3,1,1,4]



def canJump(nums):
    reachable = 0
    
    for i in range(len(nums)):
        if i > reachable:
            return False
        reachable = max(reachable,i + nums[i])
    
    return True


ans = canJump([2,3,1,1,4])
print(ans)
