/*You are given an array, A, of n elements. You have to remove exactly n/2 elements from array A, and add it to another array B(initially empty). After these operations, you can rearrange the elements of both the arrays in any order. We define, difference between these two arrays as :

Find the maximum and minimum values of differences of these two arrays.

Input Format
First Line contains number of test cases, T. For each test case, first line contains a single integer, n (n is even). Next line contains n integers, denoting the elements f array, A.*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,temp;
		cin>>n;
		vector<ll>v1;
		for(ll i=0;i<n;i++)
		{
			cin>>temp;
			v1.push_back(temp);
		}
		sort(v1.begin(),v1.end());
		ll min_sum=0,max_sum=0;
		for(ll i=0;i<n;i+=2)
		{
			min_sum+=abs(v1[i]-v1[i+1]);
		}
		for(ll i=0;i<n/2;i++)
		{
			max_sum+=abs(v1[i]-v1[n-1-i]);
		}
		cout<<min_sum<<" "<<max_sum<<endl;	
	}
	return 0;
}
