//Check sorted or not

#include<iostream>
using namespace std;

bool check(int *arr,int n)
{
	if(n==1)
	{
		return true;
	}
	if(check(arr+1,n-1) && arr[0]<=arr[1])
	{
		return true;
	}
	return false;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(check(arr,n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}
