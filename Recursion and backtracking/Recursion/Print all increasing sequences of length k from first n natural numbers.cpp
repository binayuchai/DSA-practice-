//Print all increasing sequences of length k from first n natural numbers

//Output sample (k=3 and n =5)
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
#include<bits/stdc++.h>
using namespace std;

// Displaying the element of vector
void printNumber(vector<int> a)
{
	for(int i=0; i<a.size(); i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void InSequence(vector<int> ans,int startNum,int k,int n)
{
	if(ans.size() == k) // Base case (if the size of vector is equal to k then return by printing the vector)
	{
		printNumber(ans);
		return;
	}
	
	// 
	for(int i=startNum; i<=n; i++)
	{
		ans.push_back(i);
		InSequence(ans,i+1,k,n);
		ans.pop_back();   // Backtracking to generate next term
	}
}

int main()
{
	vector<int> v;
	int k=2;
	int n=5;
	InSequence(v,1,k,n);
	return 0;
}
