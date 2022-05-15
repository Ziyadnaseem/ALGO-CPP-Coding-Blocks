/*We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

*/
#include<iostream>
using namespace std;
int main () {
	int x,y,ans=-1;
	cin>>x>>y;
	for(int i=x;i<y;i++)
	{
		for(int j=i+1;j<=y;j++)
		{
			int a=i,b=j;
			ans=max(ans,a^b);
		}
	}
	cout<<ans;
	return 0;
}
