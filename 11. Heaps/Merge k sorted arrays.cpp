#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> Pair;

int main() {
	int k,n;
	cin>>k>>n;
	int arr[k][n];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	priority_queue<Pair,vector<Pair>,greater<Pair>>pq;
	for(int i=0;i<k;i++)
	{
		Pair p;
		p.first=arr[i][0];
		p.second.first=i;
		p.second.second=0;
		pq.push(p);
	}
	int x,y;
	while(!pq.empty())
	{
		Pair p=pq.top();
		pq.pop();
		cout<<p.first<<" ";
		x=p.second.first;
		y=p.second.second;
		if(y<n-1)
		{
			Pair temp;
			temp.first=arr[x][y+1];
			temp.second.first=x;
			temp.second.second=y+1;
			pq.push(temp);
		}
	}
	return 0;
}
