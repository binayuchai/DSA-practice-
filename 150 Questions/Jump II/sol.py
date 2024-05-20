# Solved in O(n) time complexity

def JumpII(nums):
    NoOfJump = 0
    far = 0 # how far it can go
    
    end=0 # used for increment of NoOfJump 
    
    if(len(nums) == 1):
        return 0
    
    i=0
    while i < len(nums)-1:
        far = max(far,i+nums[i])
        if(far >= (len(nums)-1)):
            NoOfJump = NoOfJump+ 1
            break
        
        
        if i == end:
            NoOfJump=1 + NoOfJump
            end = far
        i +=1
            
    return NoOfJump
            
        

ans = JumpII([2,3,1,1,4])
print(ans)        