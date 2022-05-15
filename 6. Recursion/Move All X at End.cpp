/*Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.
Print the value returned*/

#include<bits/stdc++.h>
using namespace std;

string move(string s)
{
	if(s.size()<=1)
	{
		return s;
	}
	string temp=move(s.substr(1));
	if(s[0]=='x')
	{
		return temp+s[0];
	}
	return s[0]+temp;
}

int main() {
	string s;
	cin>>s;
	cout<<move(s);
	return 0;
}
