//In this method we are rotating and checking 


#include<bits/stdc++.h>
using namespace std;


bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length() != s2.length())
        {
            return false;
        }
       
       
       for(int i=0; i<s1.length(); i++)
       {
           int temp = s1[0];
           for(int j=0; j<s1.length(); j++)
           {
               s1[j] = s1[j+1];
               
           }
           s1[s1.length()-1] = temp;
           if(s1 == s2)
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

