#include<bits/stdc++.h>
using namespace std;


bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!= s2.length())
        {
            return false;
        }
        strint concat = s1+s1;
        if(concat.find(s2))
        return true;
         
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

