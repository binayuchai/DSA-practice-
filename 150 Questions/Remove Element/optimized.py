#Time complexity :O(n)
#Space complexity : O(n)

def func(list1,val):
    result = 0
    for i in range(len(list1)):
        if list1[i] != val:
            list1[result] = list1[i]
            result = result+1
            
    return result

list1 = [1,2,3,4,2]
result = func(list1,2)
print(result)