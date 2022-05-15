/*A knight is a piece used in the game of chess. The chessboard itself is square array of cells. Each time a knight moves, its resulting position is two rows and one column, or two columns and one row away from its starting position. Thus a knight starting on row r, column c – which we’ll denote as (r,c) – can move to any of the squares (r-2,c-1), (r-2,c+1), (r-1,c-2), (r-1,c+2), (r+1,c-2), (r+1,c+2), (r+2,c-1), or (r+2,c+1). Of course, the knight may not move to any square that is not on the board.

Suppose the chessboard is not square, but instead has rows with variable numbers of columns, and with each row offset zero or more columns to the right of the row above it. The figure to the left illustrates one possible configuration. How many of the squares in such a modified chessboard can a knight, starting in the upper left square (marked with an asterisk), not reach in any number of moves without resting in any square more than once? Minimize this number.
*/

#include<bits/stdc++.h>
using namespace std;
int cnt=0,ans=INT_MIN;

void knightReach(int arr[][10],int n,int r,int c)
{
	if(r<0 || r>=n || c<0 || c>=n || arr[r][c]==0)
	{
		return;
	}
	//if arr[r][c]=1
	arr[r][c]=0;
	cnt++;
	ans=max(ans,cnt);
	knightReach(arr,n,r-2,c-1);
	knightReach(arr,n,r-2,c+1);
	knightReach(arr,n,r-1,c-2);
	knightReach(arr,n,r-1,c+2);
	knightReach(arr,n,r+1,c-2);
	knightReach(arr,n,r+1,c+2);
	knightReach(arr,n,r+2,c-1);
	knightReach(arr,n,r+2,c+1);
	cnt--;
	arr[r][c]=1;
	return;
}

int main() 
{	
	int n;
	cin>>n;
	int arr[10][10];
	int sum=0;	//stores count of valid cells
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j])
			{
				sum++;
			}
		}
	}
	knightReach(arr,n,0,0);
	cout<<sum-ans;
	return 0;
}
