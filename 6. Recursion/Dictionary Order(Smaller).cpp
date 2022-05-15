/*Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.

*/

#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void print(string cur,string orig,int i,int n)
{
	if(i==n)
	{
		if(cur<orig)
		{
			res.push_back(cur);
			return;
		}
	}
	for(int j=i;j<n;j++)
	{
		swap(cur[j],cur[i]);
		print(cur,orig,i+1,n);
	}
	return;
}

int main() 
{	
	string ip;
	cin>>ip;
	print(ip,ip,0,ip.size());
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}
