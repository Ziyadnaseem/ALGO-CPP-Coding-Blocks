/*Sanju needs your help! He gets a list of employees with their salary. The maximum salary is 100.

Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. And if two employees have the same salary, they should be arranged in lexicographical manner such that the list contains only names of those employees having salary greater than or equal to a given number x.
*/
#include<bits/stdc++.h>
using namespace std;

string findNum(string s)
{
	char* token=strtok((char *)s.c_str()," ");
	string last_token;
	while(token!=NULL)
	{
		last_token=token;
		token=strtok(NULL," ");
	}
	return last_token;
}

bool compare(pair<string,string>A,pair<string,string>B)
{
	if(A.second==B.second)
	{
		return A.first<B.first;
	}
	return A.second>B.second;
}

int main() {
	int n,k;
	cin>>k>>n;
	vector<string>v(n);
	cin.get();
	for(int i=0;i<n;i++)
	{
		getline(cin,v[i]);
	}
	vector<pair<string,string>>p;
	string val;
	for(int i=0;i<n;i++)
	{
		val=findNum(v[i]);
		if(val>=to_string(k))
		{
			p.push_back(make_pair(v[i],val));
		}
	}
	sort(p.begin(),p.end(),compare);
	for(int i=0;i<p.size();i++)
	{
		cout<<p[i].first;
		if(i<p.size()-1)
			cout<<endl;
	}
	return 0;
}
