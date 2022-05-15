/*Arrange elements in a Linked List such that all even numbers are placed after odd numbers.

*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

node* evenodd(node* head)
{
	node* cur=head;
	node* os=NULL,*oe=NULL,*es=NULL,*ee=NULL;
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	while(cur!=NULL)
	{
		if(cur->data%2==0)
		{
			if(es==NULL)
			{
				es=cur;
				ee=cur;
			}
			else
			{
				ee->next=cur;
				ee=ee->next;
			}
		}
		else
		{
			if(os==NULL)
			{
				os=cur;
				oe=cur;
			}
			else
			{
				oe->next=cur;
				oe=oe->next;
			}
		}
		cur=cur->next;
	}
	if(os==NULL)
	{
		return es;
	}
	if(es==NULL)
	{
		return os;
	}
	oe->next=es;
	ee->next=NULL;
	return os;
}

int main() 
{
	int n,k,inp;
	cin>>n;
	struct node*head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>inp;
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
	node*ptr=evenodd(head);
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	return 0;
}
