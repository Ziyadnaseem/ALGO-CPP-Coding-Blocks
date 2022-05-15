/*Given an array find the number which comes with maximum frequency. It must work in O(n) time complexity.

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	unordered_map<int,int>m;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		m[temp]++;
	}
	int maxf=INT_MIN,ans;
	for(auto i:m)
	{
		if(i.second>maxf)
		{
			ans=i.first;
			maxf=i.second;
		}
	}
	cout<<ans;
	return 0;
}
