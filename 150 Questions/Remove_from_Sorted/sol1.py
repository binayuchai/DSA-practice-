#Input: nums = [0,0,1,1,1,2,2,3,3,4]

def func(list1) -> int:
    count = 0
    result = [list1[0]]
    #result[count] = list1[0]
    for i in range(1,len(list1)):
        if result[count] != list1[i]:
            count = count + 1
            result.append(list1[i])
    print(f"resultant array is :{result}")
    return count+1

nums = [0,0,1,1,1,2,2,3,3,4]
result = func(nums)
print(f"Unique element after removing are: {result}")
    