/*You are given a sorted data of n integers. You have to form a balanced Binary Search Tree and then print preorder traversal of the tree.
First line contains integer t as number of test cases.
Each test case contains following input. First line contains integer n which represents the length of the data and next line contains n space separated integers denoting the elements for the BST.
*/

#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}

node* build(int arr[],int l,int r)
{
	if(l>r)
	{
		return NULL;
	}
	int m=(l+r)/2;
	node*temp=new node(arr[m]);
	temp->left=build(arr,l,m-1);
	temp->right=build(arr,m+1,r);
	return temp;
}

int main() 
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		node* root=NULL;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		root=build(arr,0,n-1);
		preorder(root);
		cout<<endl;
	}
	return 0;
}
