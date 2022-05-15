/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
*/
#include<iostream>
#include<climits>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(long long int i=0;i<s.size();i++)
	{
		if(i==0 && s[i]-'0'==9)
		{
			continue;
		}
		if(s[i]-'0'>9-(s[i]-'0'))
		{
			s[i]=(char)(9-(s[i]-'0'))+48;
		}
	}
	cout<<s;
	return 0;
}
