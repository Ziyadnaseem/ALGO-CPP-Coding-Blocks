#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int l,int mid,int r)
{
	int ind1=l,ind2=mid+1,k=0;
	int temp[r-l+1];
	while(ind1<=mid && ind2<=r)
	{
		if(arr[ind1]>arr[ind2])
		{
			temp[k]=arr[ind2];
			k++;ind2++;
		}
		else
		{
			temp[k]=arr[ind1];
			k++;ind1++;
		}
	}
	while(ind1<=mid)
	{
		temp[k]=arr[ind1];
		k++;ind1++;
	}
	while(ind2<=r)
	{
		temp[k]=arr[ind2];
		k++;ind2++;
	}
	k=0;
	for(int i=l;i<=r;i++)
	{
		arr[i]=temp[k++];
	}
	return;
}

void mergesort(int *arr,int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
	return;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
