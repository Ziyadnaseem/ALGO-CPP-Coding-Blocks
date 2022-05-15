/*You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	if((p1.second)==(p2.second))
	{
		return p1.first<p2.first;
	}
	return (p1.second)<(p2.second);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
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
		int end=v[0].second;
		for(int i=1;i<n;i++)
		{
			if(v[i].first>=end)
			{
				ans++;
				end=v[i].second;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
