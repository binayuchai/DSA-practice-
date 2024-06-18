# Time complexity: 


def isSubstring(str,B):
    m = len(str)
    n = len(B)
    i = 0
    j = 0
    if m < n:
        return False

    
    while i < n and j < m:
        if str[j] == B[i]:
            i = i + 1
            j = j + 1
 
        else:
            j = j + 1
            
    if i == n:
        return True
    return False


        
def minRepeated(A,B):
    satisfy = False
    str = ""
    count = 0
    flag = False
    while satisfy == False:
        
        str += A
        count = count + 1
          
        if isSubstring(str,B):
            flag = True
            break
            
        
            
        if len(str) > len(B):
            satisfy = True
    
    if flag:
        return count
    else:
        count = 0 # setting count to 0 means , B is not subString of A after repeating 
        return count 
            
        
        
        
        
        

if __name__ == "__main__":
    A = 'abcd'
    B = 'cdabcdab'
    
    ans =  minRepeated(A,B)
    print(ans)
        
        