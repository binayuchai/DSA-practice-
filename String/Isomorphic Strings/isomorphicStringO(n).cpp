#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 256
bool areIsomorphic(string str1, string str2)
    {
        int map_1[MAX_CHARS]={0};
        int map_2[MAX_CHARS]={0};
        
        // Your code here
        if(str1.length()!=str2.length()) return false;
      for(int i=0; i<str1.length(); i++)
      {
          map_1[str1[i]]++;
          map_2[str2[i]]++;
          if(map_1[str1[i]]!=map_2[str2[i]]) return false;
      }
      return true;
        
    }

int main()
{
	string str1 = "aabac";
	string str2 = "xxyxz";
	cout<<areIsomorphic(str1,str2);
	return 0;
}
