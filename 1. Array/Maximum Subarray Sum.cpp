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
		cout<<ans<<endl;
	}
	return 0;
}
