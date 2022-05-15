/*You will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0,c=0,r=n-1;
	while(c<=r)
	{
		if(arr[c]==0)
		{
			swap(arr[l],arr[c]);
			l++;c++;
		}
		else if(arr[c]==1)
		{
			c++;
		}
		else
		{
			swap(arr[r],arr[c]);
			r--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
