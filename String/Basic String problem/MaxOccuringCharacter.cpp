#include<bits/stdc++.h>
using namespace std;

// Function that returns the character which occured most
char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[256]={0};
        for(int i=0; i<str.length(); i++)
        {
            count[str[i]]++;
        }
        
        int max =  INT_MIN;
        char ans;
        for(int i=0; i<str.length(); i++)
        {
            if(count[str[i]] > max)
            {
                max  = count[str[i]];
                ans = str[i]; 
            }
            if(count[str[i]] == max)
            {
                if(ans > str[i])
                 ans = str[i];
            }
        }
        return ans;
    }
    
int main()
{
	string str = "sample";
	char ans = getMaxOccuringChar(str);
	cout<<ans;
	return 0;
}
