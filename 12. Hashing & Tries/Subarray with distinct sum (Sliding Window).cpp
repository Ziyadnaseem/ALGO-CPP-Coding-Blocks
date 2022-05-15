/*Given an array, the task is to calculate the sum of lengths of contiguous subarrays having all elements distinct

*/

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unordered_set<int>s;
	int j=0,sum=0;
	for(int i=0;i<n;i++)
	{
		while(j<n && s.find(arr[j])==s.end())
		{
			s.insert(arr[j]);
			j++;
		}
		sum+=((j-i)*(j-i+1))/2;
		s.erase(arr[i]);
	}
	cout<<sum%MOD;
	return 0;
}
