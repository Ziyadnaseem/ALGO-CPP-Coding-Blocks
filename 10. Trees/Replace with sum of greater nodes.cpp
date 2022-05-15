/*Given a binary search tree, replace each nodes' data with the sum of all nodes' which are greater or equal than it. Include the current node's data also.

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

void sumtree(node* root,int &sum)
{
	if(root==NULL)
	{
		return;
	}
	sumtree(root->right,sum);
	root->data+=sum;
	sum=root->data;
	sumtree(root->left,sum);
}

int main() 
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
	int sum=0;
	sumtree(root,sum);
	preorder(root);
	return 0;
}
