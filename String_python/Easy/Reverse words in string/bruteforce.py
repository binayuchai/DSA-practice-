
# Input: s = “i love programming very much” 
# Output: s = “much very programming love i” 



def getReverse(s):
    
    a = []
    str=""
    i = 0
    while i < len(s): 

        
        if s[i] == " ":
            a.append(str)
            a.append(s[i])
            str = ""
            i = i + 1
            
        else:
            
            
            str += s[i]
            i = i+1
    a.append(str)
    
    str1 = ""
    for i in range(len(a)-1,-1,-1):
        str1 += a[i]
        
        
    return str1



    
    
if __name__ == "__main__":
    s = "i love programming very much"
    ans = getReverse(s) 
    print(ans)