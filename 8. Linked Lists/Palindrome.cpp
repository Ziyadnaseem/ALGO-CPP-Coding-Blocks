/*Check if a linked list is a palindrome.( Boolean return type )

*/

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

bool palindrome(node** head,node* ptr)
{
	if(ptr==NULL)
	{
		return true;
	}
	bool in1=palindrome(head,ptr->next);
	if(!in1)
	{
		return false;
	}
	if((*head)->data==ptr->data)
	{
		(*head)=(*head)->next;
		return true;
	}
	return false;
}

int main() 
{
	int n,k,inp;
	struct node*head=NULL;
	cin>>n;
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
	if(palindrome(&head,head))
	{
		cout<<"true";
	}
	else
		cout<<"false";
	return 0;
}
