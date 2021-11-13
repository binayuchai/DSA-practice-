#include<bits/stdc++.h>
using namespace std;

int findOccurence(string s, string x)
{
     //Your code here
     int n = s.length();
     int m = x.length();
     int ans = -1;
     for(int i=0; i<=n-m; i++)
     {
         int flag = true;
         for(int j=0; j<m; j++)
         {
             if(s[i+j]!=x[j])
             {
                 flag = false;
                 break;
             }
            
         }
         if(flag == true)
         {
             ans = i;
             return ans;
         }
     }
     return ans;
}

int main()
{
	string str = "abcdacdabcd";
	string x = "abcd";
	cout<<findOccurence(str,x);
	return 0;
}
