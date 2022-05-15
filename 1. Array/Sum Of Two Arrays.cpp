/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	int i=n-1,j=m-1,k=0,c=0;
	int res[n+m];
	while(i>=0 && j>=0)
	{
		int sum=arr1[i]+arr2[j];
		res[k]=sum%10+c;
		c=sum/10;
		k++;i--;j--;
	}
	while(i>=0)
	{
		res[k]=(arr1[i]+c)%10;
		c=(arr1[i]+c)/10;
		k++;i--;
	}
	while(j>=0)
	{
		res[k]=(arr2[j]+c)%10;
		c=(arr2[j]+c)/10;
		k++;j--;
	}
	if(c)
	{
		res[k]=c;
		k++;
	}
	for(int i=k-1;i>=0;i--)
	{
		cout<<res[i]<<", ";
	}
	cout<<"END";
	return 0;
}
