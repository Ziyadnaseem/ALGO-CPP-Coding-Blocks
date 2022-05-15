/*You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.*/

#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int m,int cur_min)
{
	int count=1,pages=0;
	for(int i=0;i<n;i++)
	{
		if(pages+arr[i]>cur_min)
		{
			count++;
			if(count>m)
			{
				return false;
			}
			pages=arr[i];
		}
		else
		{
			pages+=arr[i];
		}
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int l=arr[n-1];
		int r=0;
		for(int i=0;i<n;i++)
		{
			r+=arr[i];
		}
		int ans=INT_MAX;
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(check(arr,n,m,mid))
			{
				ans=min(ans,mid);
				r=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
