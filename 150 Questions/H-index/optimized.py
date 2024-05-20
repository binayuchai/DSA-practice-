# Time complexity- nlog(n)

# Used Binary Search

def hIndex(citations):
    citations.sort()
    maxi=0
    n = len(citations)
    start = 0
    end = n-1
    
    while start <=end:
        
        mid = int(start + (end-start)/2)
        
        if citations[mid] >= (n-mid):
            maxi = max(maxi,n-mid)
            end = mid-1
        else:
            start = mid + 1       
    return maxi

ans = hIndex([3,0,6,1,5])
print("H-Index: ",ans)