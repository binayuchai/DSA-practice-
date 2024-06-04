# If given string is palindrome, we need only one removal. 
# Else we need two removals. Note that every binary string has all 1’s as a subsequence and all 0’s as another subsequence. We can remove any of the two subsequences to get a unary string. A unary string is always palindrome. 


def isPalindrome(s):
    i = 0
    j = len(s)-1
    
    while(i<j):
        if s[i] != s[j]:
            return False
        i = i+1
        j = j-1
        
    return True


def check_minimum_to_remove(s1):
    
    if isPalindrome(s1):
        return 1
    
    return 2


ans = check_minimum_to_remove("10011")
print(ans)