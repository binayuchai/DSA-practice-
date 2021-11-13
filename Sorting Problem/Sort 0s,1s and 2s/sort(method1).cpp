#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
    {
        // coode here 
    
        int c1=0;
        int c2=0;
        int c3=0;
        for(int i=0; i<n; i++)
        {
            
        if(a[i]== 0)
        {
            c1++;
        }
        else if(a[i]==1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
        }
        for(int i=0; i<c1; i++){ 
            a[i]=0;
            
        }
        for(int i=c1; i<c1+c2; i++)
        {
            a[i]=1;
            
        }
        for(int i=c1+c2; i<c1+c2+c3; i++)
        { 
        a[i]=2;
            
        }
        for(int i=0; i<n; i++)
 	{
 		cout<<a[i]<<" ";
	 }
    }
 int main()
 {
 	int a[]={1,0,2,1,2,0};
 	int n=sizeof(a)/sizeof(a[0]);
 	sort012(a,n);
  return 0;
	}   
