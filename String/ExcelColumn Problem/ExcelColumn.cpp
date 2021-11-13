//MS Excel columns have a pattern like A, B, C, …, Z, AA, AB, AC, …., AZ, BA, BB, … ZZ, AAA, AAB ….. etc. 
//In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA”.

//Input          Output
// 26             Z
// 51             AY
// 52             AZ
// 80             CB
// 676            YZ
// 702            ZZ
// 705            AAC

// For further indepth explaination visit (https://www.youtube.com/watch?v=UcTKk2y_3s4)

#include<bits/stdc++.h>
using namespace std;

  string ExcelColumn(int N)
    {
        // declaring string to store character
        string ans ="";
        while(N) // N>0
        {
            char c = 'A'+ (N-1)%26 ;
            ans=c + ans;
            N = (N-1)/26;
        }
        return ans;
    }
int main()
{
	int N = 707;
	cout<<ExcelColumn(N);
	return 0;
}
