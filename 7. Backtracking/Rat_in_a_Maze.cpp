/*You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from position (i,j), down or right on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M). Find the rightmost path through which, rat can reach this position. A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).
*/

#include<bits/stdc++.h>
using namespace std;

bool check(char matrix[][1000],int sol[][1000],int i,int j,int r,int c)
{
	if(i==r-1 && j==c-1)
	{
		sol[i][j]=1;
		for(int k=0;k<r;k++)
		{
			for(int l=0;l<c;l++)
			{
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(i>r || j>c || matrix[i][j]=='X')
	{
		return false;
	}

	sol[i][j]=1;
	
	if(check(matrix,sol,i,j+1,r,c) || check(matrix,sol,i+1,j,r,c))
	{
		return true;
	}

	sol[i][j]=0;
	return false;
}

int main() {
	int m,n;
	cin>>m>>n;
	char matrix[1000][1000];
	int sol[1000][1000]={0};
	for(int i=0;i<m;i++)
	{
		cin>>matrix[i];
	}
	if(!check(matrix,sol,0,0,m,n))
	{
		cout<<"-1";
	}
	return 0;
}
