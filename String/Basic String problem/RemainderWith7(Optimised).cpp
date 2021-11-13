//optimised for large number

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "232444221897";
	int n = str.length();
	int series[] ={1,3,2,-1,-3,-2};
	int series_index = 0;
	int result = 0;
	for(int i=n-1; i>=0; i--)
	{
		int digits = str[i] - '0';
		result+=digits * series[series_index];
		series_index = (series_index+1)%6;
		result = result%7;
	 } 
	 if(result<0)
	 {
	 	result = (result+7)%7;
	 	
	 }
	 cout<<result;
	 return 0;
}
