/*You are given an array of numbers and a target number(T) , print all unique combinations in the array whose sum equals the target number T. Note that each number in the array may only be used once in the combination.
*/

#include<bits/stdc++.h>
using namespace std;
set<vector<int>>s;
vector<int>res;
void check_sum(int arr[],int i,int n,int total,int sum)
{
	if(total==sum)
	{
		sort(res.begin(),res.end());
		s.insert(res);
		return;
	}

	if(i>=n || total>sum)
	{
		return;
	}
	
	res.push_back(arr[i]);
	check_sum(arr,i+1,n,total+arr[i],sum);
	res.pop_back();
	check_sum(arr,i+1,n,total,sum);
	return;
}

int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	check_sum(arr,0,n,0,sum);
	for(auto itr=s.begin();itr!=s.end();itr++)
	{
		vector<int>ans=(*itr);
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
