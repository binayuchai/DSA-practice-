// Time complexity: O(M*N)
// Space complexity: O(M*N)
// Brute Force Approach
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define M 4
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
void rotateMatrix(int matrix[][N])
{
	int matrixB[M][N];
	for(int i=M-1,k=0; i>=0; i--,k++)
	{
		for(int j=0; j<N; j++)
		{
			matrixB[k][j] = matrix[j][i];
		}
		
	}
	display(matrixB);
}
int main()
{
	int matrix[M][N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	display(matrix);
	cout<<"After rotation of matrix by 90 degree"<<endl;
	rotateMatrix(matrix);
	getch();
	return 0;
}
