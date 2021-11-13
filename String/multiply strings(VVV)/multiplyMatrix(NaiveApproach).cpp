//Multiply matrix

/* example :
           11
         x 11 
		   121
		   
		   */
#include<bits/stdc++.h>

using namespace std;

inline string add_zero(int n){
    string res = "";
    while(n>0)
    {res += '0';
     n--;
    }
    return res;
}
// adding matrix
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}

// Multiply matrix
string multiply(string s1,string s2)
{
    if(s1 == "0" || s2 == "0") return "0";
    if(s1.length()<s2.length()) swap(s1,s2);
    int n1=s1.length();
    int n2=s2.length();
 string ans="";
 int p=0; // number of zeros
    for(int i=n2-1; i>=0; i--)
    {
        int carry=0;
        string cur_res = "";
        for(int j=n1-1; j>=0; j--)
        {
            int x = (s1[i]-'0')*(s2[j]-'0');
            carry = x/10;
            x = x%10;
            cur_res+=x + '0';
        }
        if(carry>0) cur_res+=carry + '0';
        reverse(cur_res.begin(),cur_res.end());
        cur_res+=add_zero(p);
        ans=findSum(cur_res,ans);
        p++;
    }
    return ans;
}
int main()
{
    string s1="123";
    string s2="456";
string a = multiply(s1,s2);
cout<<a;
    return 0;
}

