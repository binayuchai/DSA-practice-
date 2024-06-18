# Time complexity: O(A*B)

        
def minRepeated(A,B):
    m = len(A)
    n = len(B)
    count = 0
    found = False
    for i in range(m):
        j = i
        k = 0
        count = 1
        while j < n and A[j] == B[k]:
            if k == (n-1):
                found = True
                break
            
            
            j = (j+1) % m
            
            
            if j == 0:
                count = count + 1
                
            k = k+1
        if found:
            return count 
    return -1


        
        
        
        
        

if __name__ == "__main__":
    A = 'abcd'
    B = 'cdabcdab'
    
    ans =  minRepeated(A,B)
    print(ans)
        
        