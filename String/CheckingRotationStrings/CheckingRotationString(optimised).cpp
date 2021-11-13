//Using stl (find())
//Time Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;


bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!= s2.length())
        {
            return false;
        }
        string concated = s1+s1;
        if(concated.find(s2)!=string::npos)
        return true;
         
         return false;
        
    }
int main()
{
	string s1 = "geeksforgeeks";
	string s2 = "forgeeksgaeks";
	if(areRotations(s1,s2)){
	
	cout<<1;
}
else{

	cout<<0;
}
	return 0;
}

