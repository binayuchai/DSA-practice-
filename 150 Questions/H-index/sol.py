# Time complexity- nlog(n)
# Space Complexity - O(n)

def hIndex(citations):
    citations.sort()
    maxi=0
    n = len(citations)
    
    for i in range(n):
        if citations[i] >= n-i:
            maxi = max(maxi,n-i)
            
    return maxi

ans = hIndex([3,0,6,1,5])
print("H-Index: ",ans)