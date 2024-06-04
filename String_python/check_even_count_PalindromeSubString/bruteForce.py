

#Time Complexity: O(n2 * (i+j))
def EvenCountPalindromeSubString(s):
    countEven = 0
    
    for i in range(0,(len(s)-1)): # n
        str1=""
        for j in range(i+1,len(s)): # n
            str1 += s[i]
            str1 +=s[j]
            str2 = ""
            for k in range(j,i-1,-1): # i+j
                str2 += s[k]
            if str1 == str2 and len(str1) % 2 == 0:
               countEven +=1
    if countEven > 1:
        return "YES"
    return "NO"
 


ans = EvenCountPalindromeSubString("aassss")
print(ans)             
    