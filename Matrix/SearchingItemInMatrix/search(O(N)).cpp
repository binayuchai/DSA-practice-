//Time complexity : O(N)
// Space Complexity  : O(1)

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define N 3
void display(int matrix[][N])
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
// Searching Element 
void SearchItem(int matrix[][N],int x)  // x is a item to search
{
	  int i=0;
	  int j=N-1;	
		while(i<N && j>=0)
		{
			if(matrix[i][j] == x)
			{
				cout<<"Item is at index "<<i<<","<<j<<endl;
				return;
			}
			else if(matrix[i][j] > x)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
	
	cout<<"Item is not found"<<endl;
}
int main()
{
	int matrix[N][N]={1,2,3,4,5,6,7,8,9};
	int x = 7; // Item to find
	display(matrix);
	SearchItem(matrix,x);
	getch();
	return 0;
	
}
