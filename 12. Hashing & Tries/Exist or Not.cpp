/*Given an array arr of n length. You will be given Q queries for the array. Each query contains a number N.You have to determine whether a number exist in the array or not*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,q,temp;
	cin>>t;
	unordered_set<int>s;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			s.insert(temp);
		}
		cin>>q;
		while(q--)
		{
			cin>>temp;
			if(s.find(temp)==s.end())
			{
				cout<<"No\n";
			}
			else
			{
				cout<<"Yes\n";
			}
		}
		s.clear();
	}
	return 0;
}
