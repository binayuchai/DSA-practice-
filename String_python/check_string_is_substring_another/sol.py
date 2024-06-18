

def check_string_in_substring(str1,str2):
    if str1 in str2:
    
        return str2.index(str1)

    return -1


if __name__ == "__main__":
    str1 = "for"
    str2 = "geeksforgeeks"
 
    ans = check_string_in_substring(str1,str2)
    print(ans)