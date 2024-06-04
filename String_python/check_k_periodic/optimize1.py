# Time Complexity: O(n*k)

def check_k_periodic(s,k):
    i = 0
    j = 1
    m = k
    while m < len(s):
        while(i < k):
            if s[i] != s[i+m]:
                return "NO"
        m=j*k
        j +=1
    return "Yes"
        


ans = check_k_periodic('geeksgeeks',5)

print(ans)
                       