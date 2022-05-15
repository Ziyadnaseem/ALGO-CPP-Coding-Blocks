/*You are at a casino. There are N stacked cards on pile . Each card has a number written on it. Then there will be Q iterations. In ith iteration, you start picking up the cards in Ai-1th pile from the top one by one and check whether the number written on the card is divisible by the ith prime number. If the number is divisible, you stack that card on pile Bi. Otherwise, you stack that card on pile Ai. After Q iterations, cards can only be on pile B1, B2, B3, . . . BQ, AQ . Output numbers on these cards from top to bottom of each piles in order of B1, B2, B3, . . . BQ, AQ .*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1299709        
bool sieve[MAX];
vector<int> primes;
void createSieve()
{
    for(long i=0;i<MAX;i++)
	{
        sieve[i]=true;
    }
    sieve[0]=sieve[1]=false;
    for(long i=2;i<MAX;i++)
	{
        if(sieve[i])
		{
            primes.push_back(i);
            for(long j=i*i;j<MAX;j+=i)
			{
                sieve[j]=false;
            }
        }
    }
}

int main() {
	createSieve();
	int n,q,x;
	cin>>n>>q;
	stack<int>a[q+1];
	stack<int>b[q+1];
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[0].push(x);
	}
	for(int i=0;i<q;i++)
	{
		while(!a[i].empty())
		{
			if(a[i].top()%primes[i]==0)
			{
				b[i+1].push(a[i].top());
				a[i].pop();
			}
			else
			{
				a[i+1].push(a[i].top());
				a[i].pop();
			}
		}
	}
	for(int i=0;i<=q;i++)
	{
		while(!b[i].empty())
		{
			cout<<b[i].top()<<endl;
			b[i].pop();
		}
	}
	for(int i=0;i<=q;i++)
	{
		while(!a[i].empty())
		{
			cout<<a[i].top()<<endl;
			a[i].pop();
		}
	}
	return 0;
}
