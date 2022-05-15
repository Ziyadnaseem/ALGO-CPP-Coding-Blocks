/*Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.

*/
#include<iostream>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=ans*a;
		}
		a=a*a;
		b=b>>1;
	}
	cout<<ans;
	return 0;
}
