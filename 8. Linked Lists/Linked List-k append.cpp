/*Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.

*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

node* append_at_front(node* head,int k)
{
	node* q=head,*p=head;
	for(int i=0;i<k;i++)
	{
		q=q->next;
	}
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	q->next=head;
	node* newhead=p->next;
	p->next=NULL;
	return newhead;
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
	cin>>k;
	node* newhead=append_at_front(head,k%n);
	node*ptr=newhead;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	return 0;
}
