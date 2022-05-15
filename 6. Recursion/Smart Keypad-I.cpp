/*You will be given a numeric string S. Print all the possible codes for S.

Following vector contains the codes corresponding to the digits mapped.

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

For example, string corresponding to 0 is " " and 1 is ".+@$"

Input 12
Output .a .b .c +a +b +c @a @b @c $a $b $c*/

#include<bits/stdc++.h>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void print(string ip,string op,int i,int n)
{
	if(i==n)
	{
		cout<<op<<endl;
		return;
	}
	int ind=ip[0]-'0';
	for(int j=0;j<table[ind].size();j++)
	{
		print(ip.substr(1),op+table[ind][j],i+1,n);
	}
	return;
}

int main() 
{
	string ip;
	cin>>ip;
	print(ip,"",0,ip.size());
	return 0;
}
