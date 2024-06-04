# pproach: The approach to solving this problem is to check 
# if any character appears more than once.
# Since the minimal length of matching subsequence can be 1,
# hence if a character occurrence in a string more than once then two similar subsequences is possible.
# Initialize a freq[] array of length 26. Iterate over the string and increment the frequency of the characters.
# Iterate over the freq array and check if freq[i] for any i in the range of 0-26 is more than 1, 
# then it is possible. 


def check_same_subSequence(s,l):
    
    freq = [0 for i in range(26)]
    b = ord('a')
    for i in range(l):
        a = ord(s[i])
        
        freq[a - b] += 1

        
    
    for i in range(26):
        if freq[i] > 1:
     
            return True
    
    # if freq of any letter is less than 1 
    return False



if __name__ == '__main__':
    
    s1 = "disturb"  
    ans1 = check_same_subSequence(s1,len(s1))
    print(ans1)
    # returns False

    s2 = 'geeksforgeeks'
    ans2 = check_same_subSequence(s2,len(s2))
    print(ans2)
    #returns True



