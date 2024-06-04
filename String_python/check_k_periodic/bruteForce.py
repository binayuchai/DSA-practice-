

# Time Complexity: O(n*k)

def check_k_periodic(s,k):
    str1=""
    for i in range(0,k):
        str1 += s[i]
    i = k
    
    while i < len(s):
        j=0
        for m in range(i,i+k):
             
            if str1[j] != s[m]:
                return "NO"
            j +=1
        i +=k 
        
    return "YES"


ans = check_k_periodic('geeksforgeeks',5)

print(ans)
                       