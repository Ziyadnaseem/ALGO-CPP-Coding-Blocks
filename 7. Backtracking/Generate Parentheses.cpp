/*
Given an integer 'n'. Print all the possible pairs of 'n' balanced parentheses.
The output strings should be printed in the sorted order considering '(' has higher value than ')'.
*/
#include<bits/stdc++.h>
using namespace std;

void printParentheses(int n,int l,int r,string s)
{
	if(r>l || l>n || r>n)
	{
		return;
	}
	
	if(l==n && r==n)
	{
		cout<<s<<endl;
		return;
	}

	if(l==r)
	{
		printParentheses(n,l+1,r,s+"(");
	}
	if(l>r)
	{
		printParentheses(n,l,r+1,s+")");
		printParentheses(n,l+1,r,s+"(");
	}
	return;
}

int main() {
	int n;
	cin>>n;
	printParentheses(n,0,0,"");
	return 0;
}
