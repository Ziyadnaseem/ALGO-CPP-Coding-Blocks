/*There are n circles arranged on x-y plane. All of them have their centers on x-axis. You have to remove some of them, such that no two circles are overlapping after that. Find the minimum number of circles that need to be removed.

Input Format
First line contains a single integer, n, denoting the number of circles. Next line contains two integers, c and r each, denoting the circle with radius r and center, (c,0).*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	if((p1.first+p1.second)==(p2.first+p2.second))
	{
		return p1.first<p2.first;
	}
	return (p1.first+p1.second)<(p2.first+p2.second);
}

int main() {
	int n,c,r;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		cin>>c>>r;
		v.push_back(make_pair(c,r));
	}
	sort(v.begin(),v.end(),cmp);
	
	int ans=1;
	int end=v[0].first+v[0].second;
	for(int i=1;i<n;i++)
	{
		if(v[i].first-v[i].second>=end)
		{
			ans++;
			end=v[i].first+v[i].second;
		}
	}
	cout<<n-ans;
	return 0;
}
