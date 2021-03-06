/*There are N processes to be completed. All the processes have a unique number assigned to them from 1 to N.

Now, we are given two things:

1)The calling order in which all the processes are called.
2)The ideal order in which all the processes should have been executed.

Executing a process takes 1 unit of time. Changing the position takes 1 unit of time.

We have to find out the unit of time required to complete all the process such that a process is executed from the ideal order only when it exists at the same index in the calling order. We can push the first term from the calling order to the last thus rotating the order.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	deque<int>dq(n);
	for(int i=0;i<n;i++)
	{
		cin>>dq[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=0,count=0;
	while(!dq.empty())
	{
		while(arr[i]!=dq.front())
		{
			int tp=dq.front();
			dq.pop_front();
			dq.push_back(tp);
			count++;
		}
		count++;i++;
		dq.pop_front();
	}
	cout<<count;
	return 0;
}
