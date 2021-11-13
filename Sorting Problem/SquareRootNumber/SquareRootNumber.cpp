#include<bits/stdc++.h>
using namespace std;


long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        if (x == 0 || x == 1)
        return x;
        long long int ans;
         long long int start = 0;
    long long int end = x;
    while(start <= end)
    {
        long long int mid = start + (end-start)/2;
        if(mid*mid == x)
        {
            return mid;
        }
        else if(mid*mid < x)
        {
            start = mid+1;
            ans = mid;
         }
         else
       {
        end = mid -1;
        }
    }
    return ans;
    }
int main()
{
	long long int a = 5;
	cout<<floorSqrt(a);
	return 0;
}
