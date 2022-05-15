/* Count of N-Queen Solutions*/

#include<bits/stdc++.h>
using namespace std;
int cnt=0;

bool isSafe(int arr[][11],int n,int i,int j)
{
	int x=i,y=j;

	while(x>=0)
	{
		if(arr[x][j]==1)
		{
			return false;
		}x--;
	}

	while(y>=0)
	{
		if(arr[i][y]==1)
		{
			return false;
		}y--;
	}

	x=i,y=j;
	while(x>=0 && y>=0)
	{
		if(arr[x][y]==1)
		{
			return false;
		}
		x--;y--;
	}

	x=i,y=j;
	while(x>=0 && y<n)
	{
		if(arr[x][y]==1)
		{
			return false;
		}
		x--;y++;
	}

	return true;
}


bool solveQueen(int arr[][11],int n,int i)
{
	if(i==n)
	{
		cnt++;
		return false;
	}

	for(int j=0;j<n;j++)
	{
		if(isSafe(arr,n,i,j))
		{
			arr[i][j]=1;
			if(solveQueen(arr,n,i+1))
			{
				return true;
			}
			arr[i][j]=0;
		}
	}
	return false;
}

int main() 
{
	int n;
	cin>>n;
	int arr[11][11]={0};
	bool ans=solveQueen(arr,n,0);
	cout<<cnt;
	return 0;
}
