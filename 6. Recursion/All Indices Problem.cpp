/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

*/
#include<iostream>
using namespace std;

void print(int arr[],int i,int n,int k)
{
	if(i==n)
	{
		return;
	}
	if(arr[i]==k)
	{
		cout<<i<<" ";
	}
	print(arr,i+1,n,k);
	return;
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
	print(arr,0,n,k);
	return 0;
}
