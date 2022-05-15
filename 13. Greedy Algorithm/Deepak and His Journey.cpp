/*Deepak loves to travel but he wants to minimize the total travel expenditure. His journey will be through N checkpoints. Checkpoints are numbered from 0 to N-1. At the start of his journey he is present at the checkpoint 0. Also checkpoint N-1 will lead to his final destination.

Each checkpoint has a petrol pump which can be used to fill petrol in the car. Now cost of petrol per litre at different checkpoints is given by array C which has 0-based indexing where C[i] is the cost per litre of petrol at the ith checkpoint. Note that there is an infinite amount of supply at each checkpoint and car tank is also of infinite capacity. Now another array L is given which has 0-based indexing where L[i] denotes the amount of petrol in litres required to reach the (i+1)th checkpoint from the ith checkpoint. Note that the extra petrol remaining in the tank does not vanishes after reaching a checkpoint. Also, Deepak should have atleast L[i] litres of petrol at each checkpoint in order to reach the next checkpoint.

Help Deepak to estimate the minimum cost required in order complete the journey.

Input Format
First line of the input contains test cases denoted by T.

For each of the test cases, first line contains a single integers N denoting the number of checkpoints.

The next line contains N-space separated integers representing the array C which has 0-based indexing where the integer denotes the cost per litre of petrol at ith checkpoint.

The last line contains array L, which has 0-based indexing, consisting of N space separated integers where the ith integer denotes the required amount of petrol needed to reach the (i+1)th checkpoint from the ith checkpoint.*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll C[n],L[n];
		for(ll i=0;i<n;i++)
		{
			cin>>C[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>L[i];
		}
		ll ans=0;
		ll min_cost=C[0];
		for(ll i=0;i<n;i++)
		{
			min_cost=min(min_cost,C[i]);
			ans+=min_cost*L[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
