#include<bits/stdc++.h>
using namespace std;
 
 int isValid(string s){
 
 int n = s.length();
            
            //Checking whether string is empty or containing dot at first or at last index
            if(s == "" || s[0] == '.' || s[n-1] == '.') return 0;
             
             // Variable to count dots in the string
             int dots = 0;
             
            for(int i=0; i<n; i++)
            {
                // if string contain other character except dot and numbers
                if(s[i]!='.' && ((int)s[i] < 48 || (int)s[i] > 57))
				return 0;
                if(s[i] == '.') dots++;
                
            }
            if(dots!=3) return 0;
            
            int numbers_occur = 0;
            for(int i=0; i<n; i++)
            {
                bool flag = false;
                string ans="";
                while(s[i]!='.' && i<n)
                {
                    flag = true;
                    ans+=s[i];
                    i++;
                }
                if(flag) numbers_occur++;
                
                if(ans.length()>3) return 0;
                
                // since IPv4 is invalid in form of 01.02.04.05   ( zero cannot be place infront of numbers) 
                if(ans[0] == '0' && ans.length()>1) return 0;
                
				//convert string into numbers
                   stringstream geek(ans);
                   int x=0;
                   geek >> x; 
                 
				 // Checking given number comes in between 0-255  
                if(x>255 || x<0) return 0;
                
            }
            // number of occurence of 'numbers' is 4   
            if(numbers_occur!=4) return 0;
        return 1;
}
int main()
{
	string s="1.$.3.9";
	cout<<isValid(s);
	return 0;
}
