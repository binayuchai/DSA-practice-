// Reverse sentence
// example    INPUT: I am a boy
//      OUTPUT: I ma a yob
// Time complexity: O(N)
// Space complexity: O(

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Reversing the given string and storing it in a word string
    string word="";
    for(int i=input.length()-1; i>=0; i--)
    {
      word+=input[i];
    }
    
    // Declaring Vector of string type to store words indiviually
    vector<string> words;
    
    //Declaring wholeWord string to store each word
    string wholeWord="";
    for(int i=0; i<input.length(); i++)
    {
        if(word[i]!=' ')
        {
         wholeWord+=word[i];
        }
        else
        {
         words.push_back(wholeWord);
            wholeWord="";
        }
    }
    words.push_back(wholeWord);
    
    //Declaring string ans to store words from vector in reverse manner
    string ans="";
    for(int j=words.size()-1; j>0; j--)
    {
     ans+=words[j];
        ans+=' ';
    }
    ans+=words[0];
    return ans;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}
