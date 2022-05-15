/*Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.

*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

int kth(node* head,int k)
{
	node* fast=head,*slow=head;
	for(int i=0;i<k;i++)
	{
		fast=fast->next;
	}
	while(fast!=NULL)
	{
		slow=slow->next;
		fast=fast->next;
	}
	return slow->data;
}

int main() 
{
	int n,k,inp;
	struct node*head=NULL;
	while(true)
	{
		cin>>inp;
		if(inp==-1)
		{
			break;
		}
		node*temp=new node;
		temp->data=inp;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			node*ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
	}
	cin>>k;
	cout<<kth(head,k);
	return 0;
}
