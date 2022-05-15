/*Take as input N, the size of array. Take N more inputs and store that in an array. Take N more inputs and store that in another array. Write a function which gives the intersection of two arrays in an ArrayList of integers and Print the ArrayList.

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],b;
	multiset<int>s;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>b;
		if(m.find(b)!=m.end() && m[b]>0)
		{
			s.insert(b);
			m[b]--;
		}
	}
	multiset<int>::iterator it;
	cout<<"[";
	for(it=s.begin();it!=prev(s.end());it++)
	{
		cout<<*it<<", ";
	}
	cout<<*it<<"]";
	return 0;
}
