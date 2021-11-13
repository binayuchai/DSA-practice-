#include<bits/stdc++.h>
using namespace std;

string reverseString(string s)
    
    {
	int n = s.length();
        // using 2 pointers (to track individual word)
        int j = 0;
        
        // reverse the whole string
        reverse(s.begin(), s.end());
        
        // reverse individula words
        for (int i = 0; i < n; i++)
        {
            // check if current is a "." or " "
            if (s[i] == '.')
            {
                // reverse string from j to i
                reverse(s.begin() + j, s.begin()+i);
                
                // set j to i
                j = i+1;
            }
        }
        
        // reverse last word
        reverse(s.begin() + j, s.end());
        
        return s;
    }
    int main()
    {
    	string s="God.bless.me";
    	cout<<reverseString(s);
    	
    	return 0;
	}
