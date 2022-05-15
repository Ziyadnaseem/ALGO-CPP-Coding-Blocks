/*Mike loves hashing. He decides to create his own hashing technique, so he creates a Hash Function, given as :


int* hash_array(int A[], int n)
{
    int* hash = new int[MAX]; //MAX is the maximum possible value of A[i]
    for(int i=0;i<=MAX;i++) hash[i]=-1; //initialize hash to -1.
    int count = 0;
    for(int i=0;i<n;i++) // Loop through elements of array
    {
        if(hash[A[i]] == -1) // A[i] was not assigned any hash before
        {
            hash[A[i]] = count; // Assigning hash to A[i]
            count++;
            continue;
        }
        for(int j = 0;j<i;j++)
        {
            if(hash[A[j]] > hash[A[i]]) // All the hashes greater than previous hash of A[i] are decremented.
                hash[A[j]]--;
        }
        hash[A[i]] = count - 1; // Assigning a new hash to A[i]
    }
    return hash;
}

You are given an array A. You have to find the Mike's hashes for all the values that appears in this array.*/


#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>m;
bool cmp (int a,int b)
{
	return m[a]<m[b];
}
int main() {
	int n,num;
	cin>>n;
	int cnt=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		if(m.find(arr[i])==m.end())
		{
			res.push_back(arr[i]);
		}
		m[arr[i]]=cnt++;
	}
	sort(res.begin(),res.end(),cmp);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}
