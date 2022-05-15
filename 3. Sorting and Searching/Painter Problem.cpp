/*You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003*/

#include<bits/stdc++.h>
using namespace std;
#define mod 10000003

bool check(long long int arr[],long long int n,long long int k,long long int cur_min)
{
	long long int count=1;
	long long int time=0;
	for(long long int i=0;i<n;i++)
	{
		if(time+arr[i] > cur_min)
		{
			count++;
			if(count>k)
			{
				return false;
			}
			time=arr[i];
		}
		else
		{
			time+=arr[i];
		}
	}
	return true;
}

int main() 
{
	long long int n,k,t;
	cin>>n>>k>>t;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int l=*max_element(arr,arr+n);
	long long int r=0;
	for(long long int i=0;i<n;i++)
	{
		r+=arr[i];
	}
	long long int ans=INT_MAX;
	while(l<=r)
	{
		long long int mid=(l+r)/2;
		if(check(arr,n,k,mid))
		{
			ans=min(ans,mid);
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<((ans%mod)*t)%mod;
	return 0;
}
