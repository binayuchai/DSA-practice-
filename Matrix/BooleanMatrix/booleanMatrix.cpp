#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(m*n)
// Space Complexity - O(m+n)
void displayMatrix(int R,int C,int matrix[][3])
{
		for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
void modifyMatrix(int R,int C, int matrix[][3])
{
	int row[R];
	int col[C];
	/* Initialize all values of row[] as 0 */
	for(int i=0; i<R; i++)
	{
		row[i] = 0;
	}
	/* Initialize all values of col[] as 0 */
	for(int i=0; i<R; i++)
	{
		col[i] = 0;
	}
	// Store the rows and columns to be marked as
    // 1 in row[] and col[] arrays respectively
	for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			if(matrix[i][j] == 1)
			{
				row[i]=1;
				col[j]=1;
			}
			
		}
	}
	// Modify the input matrix mat[] using the
    // above constructed row[] and col[] arrays
		for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			if(row[i] == 1 || col[j] == 1)
			{
				matrix[i][j] = 1;
			}
			
		}
	}

}
int main()
{
	int matrix1[3][3]={1,0,0,0,1,0,0,0,0};
	displayMatrix(3,3,matrix1);
	modifyMatrix(3,3,matrix1);
	cout<<"After modification: \n";
	displayMatrix(3,3,matrix1);
	return 0;
	
}
