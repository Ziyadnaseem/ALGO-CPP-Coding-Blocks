/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

*/

#include<iostream>
using namespace std;

int last(int *arr,int n,int k)
{
	if(n==0)
	{
		return -1;
	}
	int index=last(arr+1,n-1,k);
	if(index==-1)
	{
		if(arr[0]==k)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	return index+1;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<last(arr,n,k);
	return 0;
}
