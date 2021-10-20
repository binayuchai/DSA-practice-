#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
string reverseByWord(string input)
{
	// Storing words in vector
	vector<string> words;
	//Storing indivisual word
	string word;
	int n = input.length()-1;
	for(int i=0; i<=n; i++)
	{
	      
		if(input[i]!=' ')
		{
			word+=input[i];
		}
		else
		{
			words.push_back(word);
			word="";
		}
	}
	words.push_back(word); // Pushing remaining word which doesnot got space at last
	
	// Reversing the vector elements
	int i=0;
	int j = words.size()-1;
	while(i<j)
	{
		swap(words[i],words[j]);
		i++;
		j--;
	}
	string ans;
	for(int i=0; i<words.size()-1; i++)
	{
		ans+=words[i];
		ans+=' ';
	}
	ans+=words[words.size()-1];
	return ans;
}
int main()
{
	string str = "I am a boy";
	string ans = reverseByWord(str);
	for(int i=0; i<ans.length(); i++)
	{
		cout<<ans[i];
	}
	getch();
	return 0;
}
