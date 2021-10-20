#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    string output;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != c) {
            output.push_back(input[i]);
        }
    }
    return output;
}

int main() {
    string input="aabcadcaa";
    char c = 'a';
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
