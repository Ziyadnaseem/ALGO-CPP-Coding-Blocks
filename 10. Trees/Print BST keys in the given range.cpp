/*You are given an array of integers. First of all , You have to form a binary search tree from given integers. Now you have provided two integers k1 and k2. You have to print all nodes of BST within the range k1 and k2 (including k1 and k2).*/

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
}

void print(node* root,int l,int r)
{
	if(root==NULL)
	{
		return;
	}
	print(root->left,l,r);
	if(root->data>=l && root->data<=r)
	{
		cout<<root->data<<" ";
	}	
	print(root->right,l,r);
	return;
}

node* insert(node* root, int val)
{
	if(root==NULL)
	{
		return new node(val);
	}
	if(val<=root->data)
	{
		root->left=insert(root->left,val);
	}
	else
	{
		root->right=insert(root->right,val);
	}
	return root;
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
			root=insert(root,arr[i]);
		}
		int l,r;
		cin>>l>>r;
		cout<<"# Preorder : ";
		preorder(root);
		cout<<"\n# Nodes within range are : ";
		print(root,l,r);
		cout<<endl;
	}
	return 0;
}
