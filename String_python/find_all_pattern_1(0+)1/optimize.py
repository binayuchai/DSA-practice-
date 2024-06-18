

def find_pattern(str1):
    
    first = str1[0]
    i = 1
    count = 0
    
    while i < len(str1):
        
        if str[i] == '0' and first == '1':
            
            while str[i] == '0':
                i = i + 1
                
                if str1[i] == '1':
                    count = count + 1
                    
                    
        first = str[i]
        i = i + 1
        
    return count
            
            
            
    

if __name__ == "__main__":
    str = "1001ab010abc01001"
    
    ans = find_pattern(str)
    
    print(ans)
    
            
        
            