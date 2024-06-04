


#Time Complexity: O(n2 * (i+j))
def EvenCountPalindromeSubString(s):
    
    
    for i in range(0,len(s)): # n
        if s[i] == s[i+1]:
            return "YES"

    return "NO"


ans = EvenCountPalindromeSubString("aassss")
print(ans)             
    