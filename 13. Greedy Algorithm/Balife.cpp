/*Given an array A of size n, In a single operation you can subtract one from A[i] and add it to either A[i-1] (if i>0) or A[i+1] (if i < n-1).
Find the minimum number of operation required to make all the array elements same.
If it is not possible to do , print -1.

Input Format
The First line contains the size of the array N The Second line contains the N number of elements
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n],total=0;	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
	}
	if(total%n==0)
	{
		total=total/n;
	}
	else
	{
		cout<<"-1";
		exit(0);
	}
	int ans=INT_MIN;
	for(int i=1;i<n;i++)
	{
		int sum=accumulate(arr,arr+i,0);
		ans=max(ans,abs(sum-(total*i)));
	}
	cout<<ans;
	return 0;
}
