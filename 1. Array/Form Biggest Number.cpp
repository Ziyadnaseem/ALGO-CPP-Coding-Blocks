/*
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
	string str1=to_string(a);
	string str2=to_string(b);
	return str1+str2>str2+str1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end(),comp);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}
