/*Mike is a very passionate about sets. Lately, he is busy solving one of the problems on sets. He has to find whether if the sum of any of the non-empty subsets of the set A is zero.

Input 1 3 2 -3
Output Yes*/

#include<bits/stdc++.h>
using namespace std;
int flag;
bool subset(int arr[],int i,int n,int sum)
{
	if(i==n)
	{
		if(sum==0)
		{
			flag++;
			if(flag>1)
			{
				return true;
			}
		}
		return false;
	}
	return (subset(arr,i+1,n,sum+arr[i]) || subset(arr,i+1,n,sum));
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
		flag=0;
		if(subset(arr,0,n,0))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
