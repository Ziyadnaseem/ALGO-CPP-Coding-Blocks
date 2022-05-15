/*count number of 1s in binary representation of an integer

*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int a,ans=0;
		cin>>a;
		while(a>0)
		{
			a=a&(a-1);
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
