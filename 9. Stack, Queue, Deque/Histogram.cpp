/*Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{	
	ll n;
	cin>>n;
	ll height[n];
	for(ll i=0;i<n;i++)
	{
		cin>>height[i];
	}
	stack<ll>st;
	ll area=INT_MIN;
	ll i=0;
	while(i<n)
	{
		if(st.empty() || height[i]>=height[st.top()])
		{
			st.push(i++);
		}
		else
		{
			ll tp=st.top();
			st.pop();
			area=max(area,height[tp]*(st.empty()?i:i-st.top()-1));
		}
	}
	while(!st.empty())
	{
		ll tp=st.top();
		st.pop();
		area=max(area,height[tp]*(st.empty()?i:i-st.top()-1));
	}
	cout<<area;
	return 0;
}
