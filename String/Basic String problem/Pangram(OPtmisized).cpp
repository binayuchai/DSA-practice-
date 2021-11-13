#include<bits/stdc++.h>
using namespace std;

string missingPanagram(string str)
{
	int count[26] = {0};
	
	string ans="";    // String that stores missing alphabet letter
	// Storing the given letter's correspond number
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
		count[str[i]-'A']++;
	    }
	    else
	    {
	    	count[str[i]-'a']++;
		}
    }
    
    //Checking whether the all letter of alphabet is present or not
    for(int i=0; i<26; i++)
    {
    	if(count[i] == 0)
    	{
    		ans+=(char)(i+97);
		}
	}
	if(ans == "")
	{
	
	 return "-1";
}
	 else
	 {
	 
	return ans;
}
	
    
}
int main()
{
	string str="abababaabaf";
	string ans = missingPanagram(str);
	cout<<ans;
	return 0;
}
