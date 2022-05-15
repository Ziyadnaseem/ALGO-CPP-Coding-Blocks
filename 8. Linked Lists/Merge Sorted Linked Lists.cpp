/*Given 2 sorted linked lists , merge the two given sorted linked list and print the final Linked List.

*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

void add(node*&head,int data)
{
	node*temp=new node;
	temp->data=data;
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

node* merge(node* &head1,node* &head2)
{
	node* head3=NULL;
	node* p1=head1,*p2=head2,*p3=head3;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->data > p2->data)
		{
			add(head3,p2->data);
			p2=p2->next;
		}
		else
		{
			add(head3,p1->data);
			p1=p1->next;
		}
	}
	while(p1!=NULL)
	{
		add(head3,p1->data);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		add(head3,p2->data);
		p2=p2->next;
	}
	return head3;
}

int main() 
{
	int m,t,n,k,inp;
	cin>>t;
	while(t--)
	{
		struct node*head1=NULL,*head2=NULL;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>inp;
			add(head1,inp);
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>inp;
			add(head2,inp);
		}
		node* newhead=merge(head1,head2);
		node*ptr=newhead;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}
	return 0;
}
