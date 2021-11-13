// Brute Force Approach
// Does not work for large number 

#include<bits/stdc++.h>
using namespace std;


int main()
{
	string n = "45332245";
	 int num = 0; 
    int N = n.length(); 
  
    // Iterate till length of the string 
    for (int i = 0; i < N; i++) 
  {
        // Subtract 48 from the current digit 
        num = num * 10 + ((int)n[i] - 48); 
  } 
  int quotient = num/7;
    int cal = num - quotient*7;  // cal = num %7;
    cout<<cal;
    return 0;
}
