#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
bool areAnagram(string s1,string s2)
{
	int n1 = s1.length();
	int n2 = s2.length();
	
	// Check if the length of both string are equal or not
	if(n1!=n2)
	return false;
	
	//Sort the strings
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	//Compare the sorted strings
	for(int i=0; i<n1; i++)
	{
		if(s1[i] != s2[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string str1="listen";
	string str2="silent";
	if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
    getch();
    return 0;
}
