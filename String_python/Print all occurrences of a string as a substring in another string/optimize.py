# Using Rabin-Karp Algo

# Step-by-step approach:

# Initially calculate the hash value of the pattern.
# Start iterating from the starting of the string:
# Calculate the hash value of the current substring having length m.
# If the hash value of the current substring and the pattern are same check if the substring is same as the pattern.
# If they are same, store the starting index as a valid answer. Otherwise, continue for the next substrings.
# Return the starting indices as the required answer.


#------------To update the next hash value of a text----------------
# hash = (hash - (text[i - pattern_length] * (bpattern_length - 1)) % p) * b + text[i]


#d is the number of character in the input alphabet
d = 256

#pat -> pattern
#txt -> text
#1 -> A prime number


def search(pat,txt,q):
    M = len(pat)
    N = len(txt)
    i=0
    
    j=0
    p=0 #hash value for pattern
    t=0 #hash value for text
    
    h=1
    
    
    for i in range(M-1):
        h = (h*d) % q
    
    
    for i in range(M):
        p = (d*p + ord(pat[i])) % q
        t = (d*t + ord(txt[i])) % q

    
    # slide the pattern over text one by one
    
    for i in range(N-M+1):
        print(f"p: {p}  and t: {t}")
        if p == t:
            # check for characters 1 by 1
            for j in range(M):
                if txt[i+j] != pat[j]:
                    break
                else:
                    j += 1
                    
            if j == M:
                print('Pattern found at index',str(i))
            
        if i < N-M:
            t = (d*(t-ord(txt[i])*h) + ord(txt[i+M])) % q
            
            #in case of negative t
            if t < 0:
                t = t+q
                

if __name__ == "__main__":
    txt = "GEEKS FOR GEEKS"
    pat =  "GEEK"
    
    # prime number
    q = 101
    
    search(pat,txt,q)
    
    
    
    
