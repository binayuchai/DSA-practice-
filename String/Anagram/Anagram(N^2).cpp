#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
	string str1="aab";
	string str2="abc";
	bool flag = false;
	
	// array to check character  are visited or not
     bool visited[str2.length()]={false};
	
	
	// Check length of both string
	if(str1.length()!=str2.length())
	{
	
	 return 0;
	 
	 }
	 
	 
	for(int i=0; i<str1.length(); i++)
	{
		for(int j=0; j<str2.length(); j++)
		{
			if(str2[j] == str1[i] && !visited[j])
			{
				visited[j] = true;
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			break;
		}
	}
	if(flag)
	{
		cout<<"Anagram"<<endl;
	}
	else
	{
		cout<<"Not anagram"<<endl;
	}
	getch();
	return 0;
}
