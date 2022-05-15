/*Fibonacci

In a mathematics class, Teacher ask Alice to find the number of all n digit distinct integers which is formed by the two distinct digits ai and bi but there is a rule to form n digit integer.

Rule: She has to form n digit integer by using two digits ai and bi without consecutive bi.

Alice is very weak in maths section. Help her to find the number of such n digit integers.
*/

#include<bits/stdc++.h>
using namespace std;

int count_num(int n)
{
	if(n<=0)
	{
		return 1;
	}
	if(n==1)
	{
		return 2;
	}
	return count_num(n-1)+count_num(n-2);
}

int main() 
{	
	int t,k=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<"#"<<k++<<" : "<<count_num(n)<<endl;
	}
	return 0;
}