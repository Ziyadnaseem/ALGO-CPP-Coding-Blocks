/*Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)*/

#include<iostream>
using namespace std;
int main() {
	int q;
	cin>>q;
	while(q--)
	{
		int a,b,count=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			int n=i;
			while(n>0)
			{
				n=n&(n-1);
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
