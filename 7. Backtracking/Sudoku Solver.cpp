/* 9x9 Sudoku Solver */

#include<bits/stdc++.h>
using namespace std;

bool check(int arr[][9],int n,int i,int j,int num)
{
	for(int k=0;k<n;k++)
    {
        if(arr[i][k]==num||arr[k][j]==num)
        {
            return false;
        }
	}

	int sx=(i/3)*3,sy=(j/3)*3;
	for(int k=sx;k<sx+3;k++)
	{
		for(int l=sy;l<sy+3;l++)
		{
			if(arr[k][l]==num)
			{
				return false;
			}
		}
	}
	return true;
}


bool solvesudoku(int arr[][9],int n,int i,int j)
{
	if(i==n)
	{
		for(int k=0;k<n;k++)
		{
			for(int l=0;l<n;l++)
			{
				cout<<arr[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(j==n)
	{
		return solvesudoku(arr,n,i+1,0);
	}

	if(arr[i][j]!=0)
	{
		return solvesudoku(arr,n,i,j+1);
	}

	for(int num=1;num<=9;num++)
	{
		if(check(arr,n,i,j,num))
		{
			arr[i][j]=num;
			if(solvesudoku(arr,n,i,j+1))
			{
				return true;
			}
		}
	}
	arr[i][j]=0;
	return false;
}

int main() 
{	
	int n;
	cin>>n;
	int arr[9][9];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	bool ans=solvesudoku(arr,n,0,0);
	return 0;
}
