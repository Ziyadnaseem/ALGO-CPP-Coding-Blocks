/*Prateek Bhaiya decided to give 100% scholarships to the needy students by taking an admission test. However in order to avoid any losses at the institute, he came up with a solution. Coding Blocks has N students and M discount coupons. A student will get 100% waiver if he gets X discount coupons.
However in order to get more discount coupons in addition to those M , Bhaiya decided that some students who perform badly in the admission tests, need to pay additional amount equivalent to Y discount coupons, i.e. good students earn discount coupons and weak students need to pay coupons to get admission.
Find out the maximum number of students who can get 100% waiver in their admission fees.
Note : Bhaiya will try his best to give 100% discount to maximum students possible.*/

#include<bits/stdc++.h>
using namespace std;

bool check(long long int n,long long int m,long long int x,long long int y,long long int cur_max)
{
	if(cur_max*x <= m+y*(n-cur_max))
	{
		return true;
	}
	return false;
}

int main() {
	long long int n,m,x,y;
	cin>>n>>m>>x>>y;
	long long int l=0,r=n,ans=-1;
	while(l<=r)
	{
		long long int mid=(l+r)/2;
		if(check(n,m,x,y,mid))
		{
			ans=max(ans,mid);
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}	
	cout<<ans;
	return 0;
}
