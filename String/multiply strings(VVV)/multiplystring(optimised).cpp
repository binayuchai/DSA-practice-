// Time complexity: O(N*M) it remains same
//Space Complexity: O(N+M) which is optimised

#include<bits/stdc++.h>
using namespace std;

string multiplyString(string s1,string s2)
{
	//handling edge cases
//case 1:
	if(s1 == "0" || s2 == "0") return "0";
//case 2:
         //If minus(-) sign is present i.e  (-11) x (11) = -121
      	int minus = 0;
      	
      	
	int n = s1.length();
	int m = s2.length();
	
	//Declaring integer array to store result of multiplication
	int res[n+m]={0};
	for(int i=n-1; i>=0; i--)
	{
		if(s1[i]=='-')
             continue;
		for(int j=m-1; j>=0; j--)
		{
           	if(s2[j]=='-')
             continue;
			res[i+j+1]+= (s1[i]-'0')*(s2[j]-'0');
		  //carry over
			res[i+j]+=res[i+j+1]/10;
				res[i+j+1]=res[i+j+1]%10;
		}
	}
	// output is converted to char and stored in string
	string output ="";
	
	
	 int k=0;
	while(k<n && s1[k] == '-')
      	{
      		minus++;
      		k++;
		  }
	int l=0;
		  while(l<m && s2[l] == '-')
		  {
		  	minus++;
		  	l++;
		  }
	
	if(minus == 1) output+="-"; 	  
	// skipping leading's 0
	int i=0;     
	while(i<(m+n) && (res[i] == 0))
	{
		 i++;
	}
	
	//COnverting integer into char and store in string
	for(int j=i; j<(m+n); j++)
	{
		output+=res[j]+'0';
	}
	 //CHecking minus(-) sign in both strings
	
    	
	return output;
}
int main()
{
	string st1="-123";
	string st2="456";
	cout<<multiplyString(st1,st2);
	return 0;
}
