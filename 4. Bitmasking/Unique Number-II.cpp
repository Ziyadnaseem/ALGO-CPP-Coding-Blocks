/*We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

*/
#include<iostream>
using namespace std;

int findSetBit(int a)
{
	int i=0;
	while(a>0)
	{
		if(a&1)
		{
			return i;
		}
		i++;
		a>>1;
	}
	return -1;
}

bool checkithbit(int a,int i)
{
	while(i--)
	{
		a>>1;
	}
	return a&1;
}

int main() {
	int n;
	cin>>n;
	int arr[n],ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		ans=ans^arr[i];
	}
	int ind=findSetBit(ans);
	int newno=0;
	for(int i=0;i<n;i++)
	{
		if(checkithbit(arr[i],ind))
		{
			newno=newno^arr[i];
		}
	}
	int other=newno^ans;
	cout<<min(newno,other)<<" "<<max(newno,other);
	return 0;
}
