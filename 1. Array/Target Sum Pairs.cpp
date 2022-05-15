/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.
*/
#include<bits/stdc++.h>
using namespace std;
void targetSum(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        if(sum==target)
        {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
    sort(arr,arr+n);
	targetSum(arr,n,x);
	return 0;
}
