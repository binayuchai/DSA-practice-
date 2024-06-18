#Time complexity: O(n*len(m))


def check_string_in_substring(str1,str2):
    str_len = len(str1)
    for i in range(len(str2)):
        str = ""
        j = i
    
        while j < str_len + i:
            str += str2[j]
            j = j + 1
        if str == str1:
            return i
        
    return -1


if __name__ == "__main__":
    str1 = "for"
    str2 = "geeksforgeeks"
    ans = check_string_in_substring(str1,str2)
    print(ans)