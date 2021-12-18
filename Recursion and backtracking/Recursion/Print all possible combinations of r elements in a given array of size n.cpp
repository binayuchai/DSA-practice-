
//Print all possible combinations of r elements in a given array of size n
//Output sample ( arr[]={1,2,3,4,5},r=3 and n =5)
/*
1 2 3 
1 2 4 
1 2 5 
1 3 4 
1 3 5 
1 4 5 
2 3 4 
2 3 5 
2 4 5 
3 4 5 */




#include <bits/stdc++.h>

using namespace std;
void print(vector<int> ans)
{
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void fun(int arr[],vector<int> v,int start,int n,int r)
{
    //base case
    if(v.size() == r)
    {
        print(v);
        return;
    }
    
    for(int i=start; i<n; i++)
    {
        v.push_back(arr[i]);
        fun(arr,v,i+1,n,r);
        v.pop_back();
    }
}
int main()
{
    vector<int> ans;
    int arr[]={1,2,3,4,5};
    int n=5;
    int r=3;
    fun(arr,ans,0,n,r);

    return 0;
}

