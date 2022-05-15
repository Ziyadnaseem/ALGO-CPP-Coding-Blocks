/*Given three numbers a,b,c. Calculate (a^b)mod c.

*/

#include<iostream>
using namespace std;
#define ll long long

ll exp(ll a,ll b,ll c)
{
	ll res=1;
	a=a%c;
	b=b%c;
	while(b>0)
	{
		if(b&1)
		{
			res=(res*a)%c;
		}
		a=(a*a)%c;
		b=b>>1;
	}
	return res;
}

int main() {
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<exp(a,b,c);
	return 0;
}
