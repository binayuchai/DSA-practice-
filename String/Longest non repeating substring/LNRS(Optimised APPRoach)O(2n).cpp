#include<bits/stdc++.h>
using namespace std;
#define NO_CHARS 256

int LongestSubstring(string s)
{
	
	if(s.empty() || s.size() == 0) return 0;
	// Initially  every element in lastIndex is set to -1
	
	vector<int> lastIndex(NO_CHARS,-1);
	
	// here Two pointer are declared  left and right
	// Initialize start of current window
	int left=0;
	int length=0;
	
	for(int right=0; right<s.length(); right++)
	{
		left  = max(left,lastIndex[s[right]]+1);
		
		// // Update result if we get a larger window
		length = max(length,right-left+1);
		
	     // Update lastIndex of left

		lastIndex[s[right]] = right;
		
		
	}
	return length;
}
int main()
{
	string s="abcaabcbb";
	cout<<LongestSubstring(s);
	return 0;
}
