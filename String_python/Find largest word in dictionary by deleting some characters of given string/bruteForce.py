
# Input : dict = {"ale", "apple", "monkey", "plea"}   
#         str = "abpcplea"  
# Output : apple 



def largest_word(dict,str):
    maxCount = 0
    trackIndex = ""
    
    for i in dict:
        count = 0
        j = 0
        k = 0
        m=0
        
        while k < len(i) and m < len(str):
            
            if i[k] == str[m]:
                count = count + 1
                k = k + 1
            else:
                m = m + 1
        
        if maxCount < count:
            maxCount = count
            trackIndex = i
    
    
    return trackIndex




data = {"pintu", "geeksfor", "geeksgeeks", "forgeek"} 
print(type(data))
ans = largest_word(data,"geeksforgeeks")

print(ans)
            
            
            