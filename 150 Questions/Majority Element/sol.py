# Input: nums = [2,2,1,1,1,2,2]
# Output: 2


#Time complexity: O(n)
#Space complexity: O(1)

def func(list1) ->int:
    result = list1[0]
    occured = list1[0]
    for i in range(len(list1)):
        count = 1
        if occured == list1[i] and i > 0:
            continue
        else:
            for j in range(i+1,len(list1)):
                if list1[i] == list1[j]:
                    count +=1
                    
            occured = list1[i]
        if count > len(list1)/2:
            result = list1[i]
    return result


nums = [2,2,1,1,1,2,2]

result = f" Majority elements is : {func(nums)}"
print(result)            
        
    