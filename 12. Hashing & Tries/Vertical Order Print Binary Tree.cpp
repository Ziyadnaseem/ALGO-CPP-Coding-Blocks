/*You will be given a Binary Tree. Your task is to print the binary tree in Vertical Fashion. The image below describes how we define a vertical traversal of a tree.

Input Format
You will be given an Integer N denoting the number of levels in the corresponding tree. On the next line you will be given (2^N)-1 integers denoting the level order input for the tree. If at any level any node is absent then that will denoted by -1 and every integer other than -1 shows the presence of a node at that level.

Sample Input
4 
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1
Sample Output
4 2 1 5 6 3 8 7 9
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

node* build()
{
	int val1,val2;
	cin>>val1;
	node* root=new node(val1);
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		node*temp=q.front();
		q.pop();
		cin>>val1;
		if(val1!=-1)
		{
			temp->left=new node(val1);
			q.push(temp->left);
		}
		cin>>val2;
		if(val2!=-1)
		{
			temp->right=new node(val2);
			q.push(temp->right);
		}
	}
	return root;
}

void vertPrint(node* root,int hd,map<int,vector<int>>&m)
{
	if(root==NULL)
	{
		return;
	}
	m[hd].push_back(root->data);
	vertPrint(root->left,hd-1,m);
	vertPrint(root->right,hd+1,m);
}

int main() 
{	
	int n;
	cin>>n;
	node* root=build();
	map<int,vector<int>>m;
	vertPrint(root,0,m);
	for(auto i:m)
	{
		for(auto j:i.second)
		{
			cout<<j<<" ";
		}
	}
	return 0;
}
