/*Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

*/
#include<bits/stdc++.h>
using namespace std;
bool compare(string A,string B)
{
	int min_size=min(A.size(),B.size());
	if(A.substr(0,min_size)!=B.substr(0,min_size))
	{
		return A<B;
	}
	else
	{
		if (A.size()>B.size())
		{
			return true;
		} 
	}
	return false;
}

int main() {
	int n;
	cin>>n;
	vector<string>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
