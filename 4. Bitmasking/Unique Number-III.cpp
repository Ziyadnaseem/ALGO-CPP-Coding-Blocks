/*We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

*/

#include<bits/stdc++.h>
using namespace std;

void setbits(int a,vector<int>&bits)
{
	int i=0;
	while(a>0)
	{
		if(a&1)
		{
			bits[i]+=1;
		}
		i++;
		a=a>>1;
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];	
	vector<int>bits(64,0);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		setbits(arr[i],bits);
	}
	int ans=0,p=1;
	for(int i=0;i<64;i++)
	{
		bits[i]=bits[i]%3;
		ans=ans+bits[i]*p;
		p=p<<1;
	}
	cout<<ans;
	return 0;
}
