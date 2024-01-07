# Input: nums = [3,2,2,3], val = 3
# Output: 2, nums = [2,2,_,_]

def remove_element(list,val):
    temp = [None]*(len(list))
    k = 0
    for i in range(0,len(list)):
        if list[i] != val:
            temp[k] = list[i]
            k = k+1
    for i in range(0,k):
        list[i] = temp[i]
    
    for j in range(k,len(list)):
        list[j] = '_'
        
    print(f"The output is: {k} and the required list is: \n{list}")
   
list1 = [3,2,2,3]
remove_element(list1,3)