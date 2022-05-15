/*
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.
*/
#include<iostream>
#include <climits>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int left[n],right[n];
	left[0]=arr[0];right[n-1]=arr[n-1];
	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	}
	for(int i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],arr[i]);
	}
	int ans=0;
	for(int i=1;i<n-1;i++)
	{
		ans+=min(left[i],right[i])-arr[i];
	}
	cout<<ans;
	return 0;
}
