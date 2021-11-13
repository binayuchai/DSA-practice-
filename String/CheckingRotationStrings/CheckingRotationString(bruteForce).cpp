#include<bits/stdc++.h>
using namespace std;


bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!= s2.length())
        {
            return false;
        }
        s1+=s1;
        int l = s1.length()-s2.length();
        for(int i=0; i<=l; i++)
        {
            
            bool flag = false;
            for(int j=0; j<s2.length(); j++)
            {
                if(s1[i+j]!=s2[j])
                {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
            {
                return true;
            }
        }
    return false;
    }
int main()
{
	string s1 = "geeksforgeeks";
	string s2 = "forgeeksgeeks";
	if(areRotations(s1,s2)){
	
	cout<<1;
}
else{

	cout<<0;
}
	return 0;
}

