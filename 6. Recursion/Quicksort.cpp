#include<iostream>
using namespace std;

int partition(int arr[],int i,int j)
{
	int temp=arr[j];		//pivot
	int l=i-1;
	for(int k=i;k<j;k++)
	{
		if(arr[k]<temp)
		{
			l++;
			swap(arr[l],arr[k]);
		}
	}
	swap(arr[l+1],arr[j]);
	return l+1;
}

void quicksort(int arr[],int i,int j)
{
	if(i<j)
	{
		int pivot=partition(arr,i,j);
		quicksort(arr,i,pivot-1);
		quicksort(arr,pivot+1,j);
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
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
	return 0;
}
