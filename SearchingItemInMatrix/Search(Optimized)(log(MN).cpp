//Time complexity : O(log(MN))
// Space Complexity  : O(1)

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define M 3
#define N 4
void display(int matrix[][N])
{
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
void SearchItem(int matrix[][N],int x)
{
	int low = 0;
	int high = (M*N)-1;
	
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		int row = mid/N;    // Finding row position of index of mid element
		int col = mid%N;    // Finding coloumn position of index of mid element
		if(matrix[row][col] == x)
		{
			cout<<"Item is at index "<<row<<","<<col<<endl;
		    return;
		}
		else if(matrix[row][col] > x)
		{
			high = mid -1;
		}
		else 
		{
			low = mid +1;
		}
	}
	cout<<"Item is not found"<<endl;
}
int main()
{
	int matrix[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
	int x = 10; // Item to find
	display(matrix);
	SearchItem(matrix,x);
	getch();
	return 0;
	
}
