#include<bits/stdc++.h>
using namespace std;


 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        
        //return vector with correct order of elements
        int j=0;
        int i=0;
        vector<int>ans;
        while(i<n && j<m)
        {
            while(i+1<n && arr1[i] == arr1[i+1])
            {
                i++;
            }
            while(j+1<m && arr2[j] == arr2[j+1])
            {
                j++;
            }
            if(arr1[i] < arr2[j])
            {
                ans.push_back(arr1[i++]);
            }
            else if(arr1[i] > arr2[j])
            {
                ans.push_back(arr2[j++]);
            }
            else
            {
                ans.push_back(arr2[j++]);
                i++;
            }
        }
        while(i<n)
        {
            while(i+1<n  &&  arr1[i]==arr1[i+1])
                i++;
            ans.push_back(arr1[i++]);
        }
        while(j<m)
        {
            while(j+1<m && arr2[j] == arr2[j+1])
            {
                j++;
            }
            ans.push_back(arr2[j++]);
        }
        return ans;
    }
int main()
 {
 	int a[]={1,2,3,4,5};
 	int b[]={7,8,9};
 	int n1=sizeof(a)/sizeof(a[0]);
 	int n2=sizeof(b)/sizeof(b[0]);
 	vector<int> ans;
 	ans=findUnion(a,b,n1,n2);
 	for(int i=0; ans.size(); i++)
 	{
 		cout<<ans[i]<<" ";
	 }
  return 0;
	}  
