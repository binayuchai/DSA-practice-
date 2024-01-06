# Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
# Output: [1,2,2,3,5,6]

#Time complexity : O(nlogn+n)
# Space complexity: m+n
def MergeSorted(list1,list2):
    list3 = list1 + list2 #n
    list3.sort() #nlogn
    return list3


list1 = [1,2,3,4,5] # size m
list2=[0,1,3,0,1,0] # size n
ans = MergeSorted(list1,list2)
print(ans)

    
    
    