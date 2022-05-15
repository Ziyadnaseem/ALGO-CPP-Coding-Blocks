/*
You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is bitonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.
*/
#include<iostream>
#include<climits>
using namespace std;
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
		int inc[n],dec[n];
		inc[0]=1,dec[n-1]=1;
		for(int i=1;i<n;i++)
		{
			if(arr[i]>=arr[i-1])
			{
				inc[i]=inc[i-1]+1;
			}
			else
			{
				inc[i]=1;
			}
		}
		for(int i=n-2;i>=0;i--)
		{
			if(arr[i]>=arr[i+1])
			{
				dec[i]=dec[i+1]+1;
			}
			else
			{
				dec[i]=1;
			}
		}
		int ans=INT_MIN;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,inc[i]+dec[i]-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
