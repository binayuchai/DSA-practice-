// Time Complexity - O(N^2)
// Naive Approach 2  (here we are using SLIDING WINDOW )

#include<bits/stdc++.h>
using namespace std;

int noRepeatSubstring(string s)
{
	int Max = INT_MIN;
	
	// If given string is empty then simply return 0
	if(s.empty()) return 0;
	
	
	for(int i=0; i<s.length(); i++)
	{
	        int count = 0;
			string ans="";
			bool visited[26]={false};
		for(int j=i; j<s.length(); j++)
		{
				if(!visited[s[j]-'a'])        // If character is visited then we count and mark it as visited
				{
					count++;
					visited[s[j]-'a']=true;
				}
				else                       
				{ 
					break;                   // if visited
				}
			}
			Max = max(count,Max);
				
	}
		

	return Max;
	
}
int main()
{
	string s = "abcabcbb";
	cout<<noRepeatSubstring(s);
	return 0;
}

