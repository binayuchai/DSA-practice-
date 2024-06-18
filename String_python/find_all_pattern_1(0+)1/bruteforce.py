

def find_pattern(str1):
    first = True
    zero = False
    i = 0
    j = 1
    count = 0
    while j < len(str1) and i < j:
        print(f"i = {i} , j = {j}")
        first = True
        

        if str1[i] != '1' or str1[i+1] != '0':
            first = False
            i = i + 1
        print(f"Value is: {str1[i]}")
        


        if str1[j] == '0':
            zero = True
        
        if (str1[j-1] != '1' or str1[j-1] == '0') and  (str1[j-1] == '1' or str1[j-1] != '0'):
            print(f"str1[j-1]: {str1[j-1]}")
            zero = False
            
        print(f"First: {first} , zero = {zero}, Value= {str[j]}")
        if first == True and zero == True and str1[j] == '1':
            count = count + 1
            print("COunt: ",count)
            
            zero = False
            i = j
        
        j = j + 1
        
    return count 

if __name__ == "__main__":
    str = "1001ab010abc01001"
    
    ans = find_pattern(str)
    
    print(ans)
    
            
            