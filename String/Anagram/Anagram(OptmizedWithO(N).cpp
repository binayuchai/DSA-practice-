//Using hashing function in this method 
// Time Complexity - O(N)
// Space Complexity - O(NO_OF_CHARS)   // Ooptimized one
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define NO_OF_CHARS 256
bool areAnagram(string s1,string s2)
{
	// Creating arrays of size 256  and initializing to 0
  int count[NO_OF_CHARS] = {0};	
 
  // If both strings are of different length. Removing
    // this condition will make the program fail for strings
    // like "aaca" and "aca"
if(s1.length()!=s2.length())
{
	return false;
}

// For each character in input strings, increment count
    // in the corresponding count array
for(int i=0; i<s1.length(),i<s2.length(); i++)
{
	count[s1[i]]++;
	count[s2[i]]--;
}
   // See if there is any non-zero value in count array
for(int i=0; i<NO_OF_CHARS; i++)
{
	if(count[i])
	{
		return false;
	}
}
return true;
  
}

int main()
{
	string str1="aab";
	string str2="abc";
	if(areAnagram(str1,str2))
	{
		cout<<"ANagram";
	}
	else
	{
		cout<<"Not Anagram";
	}
	getch();
	return 0;
}

