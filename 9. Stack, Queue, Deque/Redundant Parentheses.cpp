/*You are given an balanced expression. You have to find if it contains duplicate parentheses or not. A set of parentheses are duplicate if same subexpression is surrounded by multiple parenthesis.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int q,flag;
	cin>>q;
	string s;
	while(q--)
	{
		cin>>s;
		flag=0;
		stack<char>st;
		int n=s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]==')')
			{
				if(st.top()=='(')
				{
					cout<<"Duplicate\n";
					flag=1;
					break;
				}
				while(st.top()!='(')
				{
					st.pop();
				}
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
		}
		if(flag==0)
		{
			cout<<"Not Duplicates\n";
		}
	}
	
	
	return 0;
}
