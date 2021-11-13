#include<bits/stdc++.h>

using namespace std;

void Reverse(string s)
{
    int n = s.length();
    string rev="";
    for(int i=n-1; i>=0; i--)
    {
        rev+=s[i];
    }
    char str[n];
    
    int i=n-1; 
    while(rev[i]!=' ')
    {
        str[i] = rev[i];
        i--;
    }
    int j=0;
    int l=0;
    while(j<=i)
    {
        while(rev[j]!=' ' && j<=i)
        {
            j++;
        }
        int k = j-1;
        while(rev[k]!=' ' && k>=0)
        {
            str[l++] = rev[k--];
            
        }
        str[l++]=' ';
        j++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<str[i];
    }
}
int main()
{
   string s="I am a boy";
   Reverse(s);
    return 0;
}

