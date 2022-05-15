/*Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

*/
#include<bits/stdc++.h>
using namespace std;

int print(char *num,int n)
{
	if(n==0)
	{
		return 0;
	}
	return num[n-1]-'0'+10*print(num,n-1);
}

int main() {
	char s[10];
	cin>>s;
	cout<<print(s,strlen(s));
	return 0;
}
