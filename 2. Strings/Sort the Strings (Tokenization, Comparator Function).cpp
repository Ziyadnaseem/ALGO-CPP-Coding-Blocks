/*
Given a list of 'n' strings S0,S1,S2,……,Sn-1, each consisting of digits and spaces, the number of spaces is the same for each entry, the goal is to implement a variation of a sort command. None of the strings contains consecutive spaces. Also, no string starts with a space nor ends with it. Spaces are used to divide string into columns, which can be used as keys in comparisons.

The program has to support the required parameters:

key: integer denoting the column used as a key in comparisons. The left-most column is denoted by 1.

reversed: boolean variable indicating whether to reverse the result of comparisons.

comparison-type: either lexicographic or numeric. Lexicographic means that we use Lexicographical order where for example (122 < 13) . Numeric means that we compare the strings by their numerical values, so (13 < 122) . If the comparison type is 'numeric' and numeric values of keys of Si and Sj are equal for i < j , then Si is considered strictly smaller than Sj because it comes first.

*/

#include<bits/stdc++.h>
using namespace std;

string extractKey(string str,int key)
{
	char* ch;
	ch=strtok((char *)str.c_str()," ");
	while(key>1)
	{
		ch=strtok(NULL," ");
		key--;
	}
	return (string)ch;
}

bool lexComp(pair<string,string>A,pair<string,string>B)
{
	return A.second < B.second;
}

bool numComp(pair<string,string>A,pair<string,string>B)
{
	return stoi(A.second) < stoi(B.second);
}

int main() {
	int n;
	cin>>n;
	vector<string>v(n);
	cin.get();
	for(int i=0;i<n;i++)
	{
		getline(cin,v[i]);
	}
	int key;
	cin>>key;
	string rev;
	cin>>rev;
	string comp_type;
	cin>>comp_type;

	vector<pair<string,string>>stPair(n);
	for(int i=0;i<n;i++)
	{
		stPair[i].first=v[i];
		stPair[i].second=extractKey(v[i],key);
	}

	if(comp_type=="lexicographic")
	{
		sort(stPair.begin(),stPair.end(),lexComp);
	}
	else
	{
		sort(stPair.begin(),stPair.end(),numComp);	
	}

	if(rev=="true")
	{
		reverse(stPair.begin(),stPair.end());
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<stPair[i].first<<endl;
	}

	return 0;
}
