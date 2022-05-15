/*Prateek recently graduated from college. To celebrate, he went to a candy shop and bought all the candies. The total cost was a number upto which there are n prime numbers (starting from 2). Since Prateek wants to minimize his cost, he calls you to help him find the minimum amount that needs to be paid. Being a student of Prateek bhaiya it is now your job to help him out :)

*/
#include<bits/stdc++.h>
using namespace std;
#define maxx 10000000
#define ll long long
vector<int>v(maxx);
vector<bool>prime(maxx,true);

void sieve()
{
	prime[0]=false,prime[1]=false;
	int ind=0;
	for(int i=2;i*i<=maxx;i++)
	{
		if(prime[i])
		{
			v[ind++]=i;
			for(int j=i;j*i<=maxx;j++)
			{
				prime[j*i]=0;
			}
		}
	}
	ind=1;
	prime[0]=2;
	for(int i=3;i<maxx;i+=2)
	{
		if(prime[i])
			v[ind++]=i;
	}
}

int main() {
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
