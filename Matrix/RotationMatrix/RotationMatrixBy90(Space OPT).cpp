#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define M 4    // square matrix M = N
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
void RotationMatrix(int matrix[][N])
{
	// Transpose matrix
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<i; j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}
	
	// Rotation of Matrix by swaping rows
	for(int i=0; i<(M/2); i++) // We can use N inplace of M 
	{
		for(int j=0; j<N; j++)
		{
			swap(matrix[i][j],matrix[N-1-i][j]);
		}
	}
}
int main()
{
	int matrix[M][N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	display(matrix);
	RotationMatrix(matrix);
	cout<<"After Rotation By 90 degree"<<endl;
	display(matrix);
	getch();
	return 0;
	
}
