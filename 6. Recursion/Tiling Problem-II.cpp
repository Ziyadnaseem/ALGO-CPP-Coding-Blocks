/*Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size 1 x m . A tile can either be placed horizontally or vertically.

*/

#include<iostream>
using namespace std;
#define MOD 1000000007
int solve(int n,int m)
{
	int dp[n+1]={1};
	for(int i=1;i<=n;i++)
	{
		if(i>=m)
		{
			dp[i]=(dp[i-1]+dp[i-m])%MOD;
		}
		else
		{
			dp[i]=dp[i-1];
		}
	}
	return dp[n]%MOD;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
	return 0;
}
