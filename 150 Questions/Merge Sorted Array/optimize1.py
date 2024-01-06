
def func(list1,list2,m,n):

    list3=[None]*(m+n)
    k=i=j=0
    while i<m and j<n:
        if list1[i] < list2[j]:
            list3[k] = list1[i]
            i = i+1
        elif list1[i] > list2[j]:
            list3[k] = list2[j]
            j = j+1
        else:
            list3[k] = list1[i]
            i = i+1

        k = k+1
    
    while i<m:
        list3[k] = list1[i]
        k = k+1
        i = i+1
  
    while j<n:
        list3[k] = list2[j]
        k = k+1
        j = j+1      
        
    return list3

nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]
anwser = func(nums1,nums2,3,3)
print(anwser)