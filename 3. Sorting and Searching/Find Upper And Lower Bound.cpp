#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int num;
		cin>>num;
		auto it1=lower_bound(arr,arr+n,num);
		auto it2=upper_bound(arr,arr+n,num);
		if(binary_search(arr,arr+n,num))
		{
			cout<<it1-arr<<" "<<it2-arr-1;
		}
		else
		{
			cout<<"-1 -1";
		}
		cout<<endl;
	}
	return 0;
}
