

#include<bits/stdc++.h>
using namespace std;

 string missingPanagram(string str){
    
        bool arr[26] = {false};
    
        for(int i = 0;i<str.size();i++){
            if(str[i] >= 65 && str[i] <= 92){
                arr[str[i] - 'A'] = true;
            }
            else arr[str[i]-'a'] = true;
        }
        
        // return a string with missing characters in the input string
        // characters are sorted in lexicographical order
        
        string ans = "";
        for(int i = 0;i<26;i++){
            if(arr[i] == false){
                ans += (char)(i+97);
            }
        }
        
        return ans==""?"-1":ans;
        
    }
int main()
{
	string str="afakfjhaf";
	cout<<missingPanagram(str);
	return 0;
}
