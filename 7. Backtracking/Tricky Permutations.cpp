/*
Given a string containing duplicates, print all its distinct permutations such that there are no duplicate permutations and all permutations are printed in a lexicographic order.
*/

#include<bits/stdc++.h>
using namespace std;
set<string>mp;
void permute(string s,int i,int n)
{
	if(i==n)
	{
		mp.insert(s);
		return;
	}

	for(int j=i;j<n;j++)
	{
		swap(s[i],s[j]);
		permute(s,i+1,n);
		swap(s[i],s[j]);
	}
	return;
}

int main() 
{
	string s;
	cin>>s;
	permute(s,0,s.size());
	for(auto itr=mp.begin();itr!=mp.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}
