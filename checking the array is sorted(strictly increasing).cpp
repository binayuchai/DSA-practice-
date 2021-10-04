#include<bits/stdc++.h>
using namespace std;
string fun(int v[], int idx,int n)
{
	if(idx == n-1)
	{
		return "sorted strictly";
	}
	if(v[idx] >= v[idx+1])
	{
		return "unsorted strictly";
	}
	return fun(v,idx+1,n);
}
int main()
{
	int arr[]={1,2,3,4,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<fun(arr,0,size);
	return 0;
}
