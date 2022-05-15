/*Dean of MAIT is going to visit Hostels of MAIT. As you know that he is a very busy person so he decided to visit only first "K" nearest Hostels. Hostels are situated in 2D plane. You are given the coordinates of hostels and you have to answer the Rocket distance of Kth nearest hostel from origin ( Dean's place ) .

Input Format
First line of input contains Q Total no. of queries and K There are two types of queries:

first type : 1 x y For query of 1st type, you came to know about the co-ordinates ( x , y ) of newly constructed hostel. second type : 2 For query of 2nd type, you have to output the Rocket distance of Kth nearest hostel till now.

The Dean will always stay at his place ( origin ). It is gauranted that there will be atleast k queries of type 1 before first query of type 2.

Rocket distance between two points ( x2 , y2 ) and ( x1 , y1 ) is defined as (x2 - x1)2 + (y2 - y1)2
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	priority_queue<ll>pq;
	ll q,k,t,dist;
	cin>>q>>k;
	while(q--)
	{
		cin>>t;
		ll x1,y1;
		if(t==1)
		{
			cin>>x1>>y1;
			dist=x1*x1+y1*y1;
			if(pq.size()<k)
			{
				pq.push(dist);
			}
			else if(dist<pq.top())
			{
				pq.pop();
				pq.push(dist);
			}
		}
		else
		{
			cout<<pq.top()<<endl;
		}
	}
	return 0;
}
