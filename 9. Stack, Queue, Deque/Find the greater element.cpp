/*We are given a circular array, print the next greater number for every element. If it is not found print -1 for that number. To find the next greater number for element Ai , start from index i + 1 and go uptil the last index after which we start looking for the greater number from the starting index of the array since array is circular.*/

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
	stack<pair<int,int>>st;
	int ans[n];
	st.push(make_pair(arr[0],0));
	for(int i=1;i<n;i++)
	{
		if(arr[i]<=st.top().first)
		{
			st.push(make_pair(arr[i],i));
		}
		else
		{
			auto temp=st.top();
			st.pop();
			ans[temp.second]=arr[i];
			st.push(make_pair(arr[i],i));
		}
	}
	while(!st.empty())
	{
		auto temp=st.top();
		st.pop();
		ans[temp.second]=-1;
	}
	ans[n-1]=-1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[n-1])
		{
			ans[n-1]=arr[i];
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}