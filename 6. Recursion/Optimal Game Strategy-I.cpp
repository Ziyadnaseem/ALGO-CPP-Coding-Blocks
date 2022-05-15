/*Piyush and Nimit are playing a coin game. They are given n coins with values x1, x2 …. xn where 'n' is always even. They take alternate terms. In each turn, a player picks either the first coin or the last coin from the row and removes it from the row. The value of coin is received by that player. Determine the maximum value that Piyush can win with if he moves first. Both the players play optimally.
*/
#include<iostream>
using namespace std;

int total(int *arr,int n)
{
	if(n<=0)
	{
		return 0;
	}
	int first=arr[0]+min(total(arr+2,n-2),total(arr+1,n-2));
	int last=arr[n-1]+min(total(arr,n-2),total(arr+1,n-2));
	return max(first,last);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<total(arr,n);
	return 0;
}
