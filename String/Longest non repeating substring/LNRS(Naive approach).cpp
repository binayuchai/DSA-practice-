// Time Complexity - O(N^3)
// Naive Approach(Brute Force MEthod)

#include<bits/stdc++.h>
using namespace std;

int noRepeatSubstring(string s)
{
	int Max = INT_MIN;
	
	// If given string is empty then simply return 0
	if(s.empty()) return 0;
	
	
	for(int i=0; i<s.length(); i++)
	{
		for(int j=i; j<s.length(); j++)
		{
			int count = 0;
			string ans="";
			bool visited[256]={false};
			for(int k=i; k<=j; k++)
			{
				if(!visited[s[k]])        // If character is visited then we count and mark it as visited
				{
					count++;
					visited[s[k]]=true;
				}
				else                       
				{ 
					break;                   // if visited
				}
			}
			Max = max(count,Max);
		}
	}
	return Max;
	
}
int main()
{
	string s = "geeksforgeeks";
	cout<<noRepeatSubstring(s);
	return 0;
}

