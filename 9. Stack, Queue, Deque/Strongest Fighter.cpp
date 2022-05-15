/*There is a group of MMA fighters standing together in a line. Given the value of their strengths, find the strength of the strongest fighter in continuous sub-groups of size k.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{	
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll k;
	cin>>k;
	deque<ll>dq;
	for(ll i=0;i<k;i++)
	{
		while(!dq.empty() && arr[dq.back()]<=arr[i])
		{
			dq.pop_back();
		}
		dq.push_back(i);
	}
	for(ll i=k;i<n;i++)
	{
		cout<<arr[dq.front()]<<" ";
		while(!dq.empty() && dq.front()<=i-k)
		{
			dq.pop_front();
		}
		while(!dq.empty() && arr[i]>=arr[dq.back()])
		{
			dq.pop_back();
		}
		dq.push_back(i);
	}
	cout<<arr[dq.front()];
	return 0;
}
