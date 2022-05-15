/*
A group of cows grabbed a truck and ventured on an expedition deep into the jungle. Being rather poor drivers, the cows unfortunately managed to run over a rock and puncture the truck's fuel tank. The truck now leaks one unit of fuel every unit of distance it travels.

To repair the truck, the cows need to drive to the nearest town (no more than 1,000,000 units distant) down a long, winding road. On this road, between the town and the current location of the truck, there are N (1 <= N <= 10,000) fuel stops where the cows can stop to acquire additional fuel (1..100 units at each stop).

The jungle is a dangerous place for humans and is especially dangerous for cows. Therefore, the cows want to make the minimum possible number of stops for fuel on the way to the town. Fortunately, the capacity of the fuel tank on their truck is so large that there is effectively no limit to the amount of fuel it can hold. The truck is currently L units away from the town and has P units of fuel (1 <= P <= 1,000,000).

Determine the minimum number of stops needed to reach the town, or if the cows cannot reach the town at all.

Input Format
The First Line contains a N integer followed by N number of pairs in the next lines.
Each line contains two space-separated integers describing a fuel stop: The first integer is the distance from the town to the stop; the second is the amount of fuel available at that stop.
The Last line contains a pair of L and P.*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,d,f;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		cin>>d>>f;
		v.push_back(make_pair(d,f));
	}
	cin>>d>>f;
	for(int i=0;i<n;i++)
	{
		v[i].first=d-v[i].first;
	}
	sort(v.begin(),v.end());
	int pos=f,ans=0,i=0;
	priority_queue<int>pq;
	while(pos<d)
	{	
		while(pos>=v[i].first)
		{
			pq.push(v[i].second);
			i++;
		}
		if(!pq.empty())
		{
			pos+=pq.top();
			pq.pop();
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
