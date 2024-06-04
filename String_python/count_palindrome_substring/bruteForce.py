

# Examples:
# Input : str = "abaab"
# Output: 3
# Explanation : 
# All palindrome substring are :
#  "aba", "aa", "baab" 

# Input : str = "abbaeae"
# Output: 4
# Explanation : 
# All palindrome substring are : 
# "bb", "abba", "aea", "eae":



def practiceQ(s1):
    count = 0
    for i in range((len(s1)-1)):

        for j in range(i+1,len(s1)):
            str1=""
            str2=""
  
            for k in range(j,i-1,-1):
                
                str1 +=s1[k]
       
            
            for m in range(i,j+1,1):
                str2 +=s1[m]
           

            
            print(str1)
            
            print(str2)
            if str1 == str2:
     

                count +=1    
          


    return count
        
    


def main():
    string_val1= "abbaeae"



    
    print(practiceQ(string_val1))
    



# Run the main function
if __name__ == "__main__":
    main()