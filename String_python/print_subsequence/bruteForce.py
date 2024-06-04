
# def printSubsequence(input, output):
 
#     # Base Case
#     # if the input is empty print the output string
    
    

    
#     print(f"Output: {output}")
    
    
    
#     if len(input) == 0:
#         print(output, end=' ')
#         return
 
#     # output is passed with including the
#     # 1st character of input string
#     printSubsequence(input[1:], output+input[0])
 
#     print("Finished")
    
    
#     # output is passed without including the
#     # 1st character of input string
#     printSubsequence(input[1:], output)
 
 
# # Driver code
# # output is set to null before passing in
# # as a parameter
# output = ""
# input = "abcd"
 
# printSubsequence(input, output)
            
            

    

def func(a):
    if a <= 1:
        return 1
    else:
        return a * func(a-1)

ans = func(5)
print(ans) 