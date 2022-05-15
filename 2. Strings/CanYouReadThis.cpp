/*One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s,ans="";
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			if(i!=0)
			{
				cout<<ans<<endl;
			}
			ans="";
			ans+=s[i];
		}
		else
		{
			ans+=s[i];
		}
	}
	cout<<ans;
	return 0;
}
