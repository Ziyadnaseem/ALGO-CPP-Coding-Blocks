/*We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n],ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		ans=ans^arr[i];
	}
	cout<<ans;
	return 0;
}
