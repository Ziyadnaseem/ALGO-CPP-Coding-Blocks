/*PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000	
int prime[MAX]={0},cum[MAX]={0};

void sieve()
{
	prime[0]=0,prime[1]=0;
	for(int i=3;i<=MAX;i+=2)
	{
		prime[i]=1;
	}
	for(int i=3;i<=MAX;i+=2)
	{
		if(prime[i])
		{
			for(int j=2*i;j<=MAX;j+=i)
			{
				prime[j]=0;
			}
		}
	}
	cum[0]=0,cum[1]=0;cum[2]=1;
	for(int i=3;i<=MAX;i++)
	{
		cum[i]=cum[i-1]+prime[i];
	}
}

int main() {
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<cum[b]-cum[a-1]<<endl;
	}
	return 0;
}
