/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++)
	{
		int left = i+1;
		int right = n - 1;
		while (left < right)
		{
			int sum = arr[left] + arr[right];
			if (sum+arr[i] > target)
			{
				right--;
			}
			else if (sum+arr[i] < target)
			{
				left++;
			}
			else
			{
				cout << arr[i]<<", "<<arr[left] << " and " << arr[right] << endl;
				left++;
				right--;
			}
		}
	}
	return 0;
}
