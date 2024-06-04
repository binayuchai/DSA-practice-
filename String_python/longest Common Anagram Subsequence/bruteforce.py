

# we are using concept of 'HASH TABLE' where we are storing the frequency of each character in both strings 
# Time complexity: O(n+m)

def longest_common_anagram_subsequence(str1,str2):
    
    length = 0
    SIZE = 26
    
    freq1 = [0] * SIZE
    freq2 = [0] * SIZE
    
    for i in range(len(str1)):
        freq1[ord(str1[i]) - ord('a')] += 1
        
    for j in range(len(str2)):
        freq2[ord(str2[j]) - ord('a')] += 1
        
    for m in range(SIZE):
        length += min(freq1[m],freq2[m])
        
    return length
    
    


ans = longest_common_anagram_subsequence("abdacp",'ckamb')
print(ans)