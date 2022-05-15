/*A religious king wants to build the largest temple in his kingdom . To build the largest temple he needs to find the area of the largest suitable land . Given co-ordinates which denotes rivers flowing through the point horizontally as well as vertically , find the largest area possible to make the grand temple.
Consider 2 rivers flowing across x-axis as well as y-axis. The temple must be enclosed by rivers on all 4 sides.
Input Format
An integer n denoting number of co-ordinates followed by n co-ordinates*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>x(n),y(n);
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	int dx=0,dy=0;
	dx=max(dx,x[0]-1);
	dy=max(dy,y[0]-1);
	for(int i=1;i<n;i++)
	{
		dx=max(dx,x[i]-x[i-1]-1);
		dy=max(dy,y[i]-y[i-1]-1);
	}
	cout<<dx*dy;
	return 0;
}
