
# Input : dict = {"ale", "apple", "monkey", "plea"}   
#         str = "abpcplea"  
# Output : apple 


#Time Complexity: O(N*(K+n))
  # where N = loop over dict
   # K = length of each dict
   # n = length of given string
   
   

def isSequence(str1,str2):
    
    a = len(str1)
    b = len(str2)
    
    i =0
    j=0
    
    while i < a and j < b:
        
        if str1[i] == str2[j]:
            i = i + 1
        else:
            j = j + 1
    
    if i == a:
        return True
    return False

    
def largest_word(dict,str):
    maxCount = 0
    result = ""

    for i in dict:
        
        if maxCount < len(i) and isSequence(i,str):
            result = i
            maxCount = len(i)
            
    return result
        
        
      
        
  





data = {"pintu", "geeksfor", "geeksgeeks", "forgeek"} 
print(type(data))
ans = largest_word(data,"geeksforgeeks")

print(ans)
            
            
            