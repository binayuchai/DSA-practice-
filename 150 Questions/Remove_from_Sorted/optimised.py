#Input: nums = [0,0,1,1,1,2,2,3,3,4]

#Time complexity: O(n)
#Space complexity: O(1)  ---> space optimised
def func(list1) -> int:
    count = 0
    #result[count] = list1[0]
    for i in range(1,len(list1)):
        if list1[count] != list1[i]:
            count = count + 1
            list1[count] = list1[i]
    list1 = [list1[x] for x in range(0,count+1)]
    print(f"resultant array is :{list1}")
    return count+1

nums = [0,0,1,1,1,2,2,3,3,4]
result = func(nums)
print(f"Unique element after removing are: {result}")
    