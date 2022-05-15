/*Shekhar is a bomb defusal specialist. He once encountered a bomb that can be defused only by a secret code. He is given a number N and a number K. And he is also given permutation of first N natural numbers . The defusal code is the largest permutation possible by doing atmost K swaps among a pair of the given permutation. Help him to find the final permutation.

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	unordered_map<int,int>m;
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]=i;
	}
	for(int num=n;num>0;num--)
	{
		if(k<1)
		{
			break;
		}
		int index=n-num;
		if(index!=m[num])
		{
			swap(arr[index],arr[m[num]]);
			k--;
			m[arr[m[num]]]=m[num];
			m[num]=index;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
