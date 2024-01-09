#Time complexity: O(n)
#Space complexity: O(n)


# Input: nums = [1,1,1,2,2,3]
# Output: 5, nums = [1,1,2,2,3,_]

def remove_element(list1):
    j=0
    k = 1
    for i in range(1,len(list1)):
        
        if list1[i] != list1[j]:
            j+=1
            list1[j] = list1[i]
            k=1
        elif k < 2:
            j+=1
            list1[j] = list1[i]
            k +=1


    
    for i in range(j+1,len(list1)):
        list1[i] = '_'
    return list1

nums = [1,1,1,2,2,3]
print(remove_element(nums))


