/*Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

You need not have to create a new list. Just reverse the old one using head.*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

node* reverse(node* &head,int k)
{
	node*p=NULL,*q=head,*r=NULL;
	int num=0;
	while(q!=NULL && num<k)
	{
		r=q->next;
		q->next=p;
		p=q;
		q=r;
		num++;
	}
	
	if(r!=NULL)
	{
		head->next=reverse(r,k);
	}
	
	return p;
}

int main() 
{
	int n,k,inp;
	cin>>n>>k;
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
	node* newhead=reverse(head,k);
	node*ptr=newhead;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	return 0;
}
