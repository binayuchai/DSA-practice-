#Time complexity: O(n*m)

def print_all_subSequence(str1,str2):
    a=[]
    n= len(str1)
    for i in range(len(str2)-n+1):
        str = ""
        for j in range(i,n+i):
                
            str += str2[j]
        if str == str1:
            print(f"{str} == {str1}")
            a.append(i)
        # print(a)-
    return a

if __name__ == "__main__":
    str1 = 'Geeks'
    str2 = 'GeeksforGeeks'
    ans = print_all_subSequence(str1,str2)

    if len(ans) > 0:
        print(ans)
    else:
        print("NONE")
        
        