/*You are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.*/

#include<iostream>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n],pre[n+1]={0},sum=0;
		pre[0]=1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			sum=((sum%n)+n)%n;
			pre[sum]++;
		}
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ll m=pre[i];
			ans+=m*(m-1)/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
