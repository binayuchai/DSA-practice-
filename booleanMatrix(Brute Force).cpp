/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


// Time complexity - O((M*N)(M+N))
// Space complexity - O(M+N)
#include<bits/stdc++.h>
using namespace std;

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
	
	int matrix1[R][C];
	//Initializing the extra matrix with value 0
		for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			matrix1[i][j] = 0;
		}
	}
	for(int i=0; i<R; i++)
	{
		int m=i;
		for(int j=0; j<C; j++)
		{ 
		    int k = j;
			if(matrix[i][j] == 1)
			{
			   
			while(k<C)
			{
			    matrix1[i][k++] = 1;
			}
			while(m<R)
			{
			    matrix1[m++][j] = 1;
			}
			}
			
		}
	}
	// displaying the another matrix with modified previous matrix
		for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int matrix1[3][3]={1,0,0,0,1,0,0,0,0};
	displayMatrix(3,3,matrix1);
	cout<<"After modification: \n";
	modifyMatrix(3,3,matrix1);
	return 0;
	
}
