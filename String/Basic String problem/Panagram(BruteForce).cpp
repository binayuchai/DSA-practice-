
// Brute Force Appproach(me)   
// Time Complexity: O(N*Alphabet number)

#include<bits/stdc++.h>
using namespace std;


string toLowerCase(string str)
  {
      for(int i=0; str[i]!='\0'; i++)
      {
          if(str[i]>='A' && str[i]<='Z')
          {
              str[i] = str[i] + 32;
          }
      }
      return str;
  }
    string missingPanagram(string str){
    
     //Your code here
     string str1 = toLowerCase(str);
     string ans1="-1";   // To return if string contain all the alphabet letter
     string ans="";     //  Given string that misses some letter from alphabet
     bool flag = false;  //  To verify if string contain all the alphabet letter
     string Alpha ="abcdefghijklmnopqrstuvwxyz";
     for(int i=0; i<Alpha.length(); i++)
     {
      bool flag1 = false;   
         for(int j=0; j<str1.length(); j++)
         {
             if(str1[j] == Alpha[i])
             {
                 flag1 = true;
                 break;
             }
         }
         if(flag1 == false)
         {
             ans+=Alpha[i];
             flag = true;
         }
     }
     if(flag){
     return ans;
     }
     else{
     return ans1; 
     }
    }
int main()
{
	string str = "abcdegdljafdaht";
	string s = missingPanagram(str);
	cout<<s;
	return 0;
}

