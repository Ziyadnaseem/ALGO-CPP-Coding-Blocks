/*You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
For example, "(())", "(())()" are balanced and "())(", "(()))" are not.*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(stack<char>st,string s)
{
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else
		{	
			if(s[i]==')' && st.top()=='(')
			{
				st.pop();
			}
			else if(s[i]=='}' && st.top()=='{')
			{
				st.pop();
			}
			else if(s[i]==']' && st.top()=='[')
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return st.empty();
}

int main() {
	string s;
	cin>>s;
	stack<char>st;
	if(check(st,s))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
