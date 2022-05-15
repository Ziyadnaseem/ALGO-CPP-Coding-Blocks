/*Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.size(),i,j=0;
	for(i=0;i<n-1;i++)
	{
		string t=to_string(s[j+1]-s[j]);
		s.insert(j+1,t);
		j=j+t.size()+1;
	}
	cout<<s;
	return 0;
}
