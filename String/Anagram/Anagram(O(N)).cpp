//Using hashing function in this method 
// Time Complexity - O(N)
// Space Complexity - O(NO_OF_CHARS)
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define NO_OF_CHARS 256
bool areAnagram(string s1,string s2)
{
	// Creating arrays of size 256  and initializing to 0
  int count1[NO_OF_CHARS] = {0};	
  int count2[NO_OF_CHARS] = {0};

if(s1.length()!=s2.length())
{
	return false;
}
// Counting the number of given alphabets present in each array  example(aab) : a=2 and b=1
for(int i=0; i<s1.length(),i<s2.length(); i++)
{
	count1[s1[i]]++;
	count2[s2[i]]++;
}

//Comparing the number of alphabet with their respective repeatation in array  example( count1 has {2,1} ; count2 has {1,1,1}) which return false
for(int i=0; i<NO_OF_CHARS; i++)
{
	if(count1[i]!=count2[i])
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

