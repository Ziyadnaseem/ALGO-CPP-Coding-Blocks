//Striver (nlogn approach)

#include<bits/stdc++.h>
using namespace std;

int lis(vector<int>arr)
{
	vector<int>res;
	for(int i=0;i<arr.size();i++)
	{
		if(res.empty() || res[res.size()-1]<arr[i])
		{
			res.push_back(arr[i]);
		}
		else
		{
			int index=upper_bound(res.begin(),res.end(),arr[i])-res.begin();
			res[index]=arr[i];
		}
	}
	return res.size();
}

int main() 
{
	vector<int>arr{1,5,2,3,4,9,6,10};
	cout<<lis(arr);
	return 0;
}