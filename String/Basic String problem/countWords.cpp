//  Basic string problem
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code here
    int count = 1; // since we cannot traverse string to -1 index so we want to count it as extra 
    for(int i=0; i<input.length(); i++)
    {
      if(input[i] == ' ')
      {
          count++;
        }
    }
    return count; 
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
