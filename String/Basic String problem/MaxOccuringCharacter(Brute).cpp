// Time Complexity: O(N*N)
// Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
string str = "sample";
int n = str.length();
int max = INT_MIN;
char maxCh;
for(int i=0; i<n; i++)
{
    int count = 0;
    for(int j=0;j<n; j++)
    {
        if(str[i] == str[j])
        {
            count++;
        }
    }
    if(count>max)
    {
        max = count;
        maxCh = str[i];
    }
    if(count == max)
    {
        if(str[i]<maxCh)
        {
            maxCh = str[i];
        }
    }
}
cout<<maxCh;

    return 0;
}

