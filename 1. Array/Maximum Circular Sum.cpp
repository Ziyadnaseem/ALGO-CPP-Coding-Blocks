/*
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.
*/
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n)
{
		int ans=0,sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
			if(ans<sum)
			{
				ans=sum;
			}
			if(sum<0)
			{
				sum=0;
			}
		}
		return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int nonwrapsum=kadane(arr,n);
		int wrapsum=0,total=0;
		for(int i=0;i<n;i++)
		{
			total+=arr[i];
			arr[i]=-arr[i];
		}
		wrapsum=total+kadane(arr,n);
		cout<<max(wrapsum,nonwrapsum)<<endl;
	}
	return 0;
}
