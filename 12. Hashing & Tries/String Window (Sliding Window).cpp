/*Ravi has been given two strings named string1 and string 2. He is supposed to find the minimum length substring of the string1 which contains all the characters of string2. Help him to find the substring

*/

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string s,p;
	getline(cin,s);
	getline(cin,p);
	unordered_map<char,int>mp,ms;
	int pl=p.size();
	int sl=s.size();
	for(int i=0;i<pl;i++)
	{
		mp[p[i]]++;
	}
	int cnt=0,start_ind=-1,start=0,min_len=INT_MAX;
	string ans;
	for(int i=0;i<sl;i++)
	{
		if(sl<pl)
		{
			break;
		}
		ms[s[i]]++;
		
		//count increase
		if(mp[s[i]]!=0 && mp[s[i]]>=ms[s[i]])
		{
			cnt++;
		}	

		//contraction from start
		if(cnt==pl)
		{
			int j=start;
			while(mp[s[j]]==0 || ms[s[j]]>mp[s[j]])
			{
				ms[s[j]]--;
				start++;
				j++;
			}

			if(i-start+1<min_len)
			{
				min_len=i-start+1;
				start_ind=start;
			}	
		}
	}
	if(start_ind==-1)
	{
		cout<<"No String";
	}
	else
	{
		cout<<s.substr(start_ind,min_len);
	}
	return 0;
}
