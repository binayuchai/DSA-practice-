


def practiceQ(s1,s2):
    ans=0

    for i in range(0,len(s1)):
        subString = ""
        for j in range(i,len(s1)):
             subString +=s1[j]
             
             if s2.find(subString) != -1:
                 ans+=1
    
    return ans
    


        
    


def main():
    string_val1= "aab"
    string_val2 = "aaaab"


    
    print(practiceQ(string_val1,string_val2))
    


# Run the main function
if __name__ == "__main__":
    main()