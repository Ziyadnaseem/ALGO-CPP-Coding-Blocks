/*The stock span problem is a financial problem where we have a series of N daily price quotes for a stock and we need to calculate span of stock’s price for all N days. You are given an array of length N, where ith element of array denotes the price of a stock on ith. Find the span of stock's price on ith day, for every 1<=i<=N.
A span of a stock's price on a given day, i, is the maximum number of consecutive days before the (i+1)th day, for which stock's price on these days is less than or equal to that on the ith day.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin>>n;
	stack<pair<int,int>>st;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(st.empty())
		{
			st.push(make_pair(x,1));
			cout<<"1 ";
		}
		else
		{
			if(st.top().first<=x)
			{
				int temp=1;
				while(!st.empty() && x>=st.top().first)
				{
					temp+=st.top().second;
					st.pop();
				}
				cout<<temp<<" ";
				st.push(make_pair(x,temp));
			}
			else
			{
				st.push(make_pair(x,1));
				cout<<"1 ";
			}
		}
	}
	cout<<"END";
	return 0;
}
