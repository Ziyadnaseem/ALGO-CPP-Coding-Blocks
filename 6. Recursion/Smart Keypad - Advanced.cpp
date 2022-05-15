/*Given a long vector of strings, print the strings that contain the strings generated by numeric string str.

vector<string> keypad = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string searchIn [] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
For example, if the input is 26 and the string is coding, then output should be coding since 26 can produce co which is contained in coding.

Input 34
Output vidhi divyam sneha*/

#include<bits/stdc++.h>
using namespace std;
vector<string> table = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string>searchIn = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

void print(string ip,string op,int i,int n)
{
	if(i==n)
	{
		for(int t=0;t<searchIn.size();t++)
		{
			if(searchIn[t].find(op)!=-1)
			{
				cout<<searchIn[t]<<endl;
			}
		}
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