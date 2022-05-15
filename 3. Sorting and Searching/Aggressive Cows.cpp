/*Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?*/

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>arr,int n,int c,int cur_max)
{
	int count=1,left=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]-arr[left]>=cur_max)
		{
			count++;
			if(count==c)
			{
				return true;
			}
			left=i;
		}
	}
	return false;
}

int main() {
	int n,c;
	cin>>n>>c;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int l=v[0],r=v[n-1]-v[0];
	int ans=INT_MIN;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(v,n,c,mid))
		{
			ans=max(ans,mid);
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
