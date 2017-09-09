#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void push(struct node** head, int i)
{
	struct node* temp;
	temp= (struct node *)malloc(sizeof(struct node));
	temp->data=i;
	temp->next=(*head);
	*head=temp;
}

int main()
{
	struct node* head=NULL;struct node* temp=NULL;struct node* prev=NULL;struct node* next1=NULL;
	int n,m,i,count=0;
	cin>>n>>m; //m=node you want to remove

	
	for(i=0;i<n;i++)
	{
		
		push(&head,i);
	
	}
	temp=head;
//	cout<<endl;
	for(i=1;i<=m;i++)
		{
			if(temp->next==NULL)
			{
				prev->next=NULL;
				
			}
			else
			{
				prev=temp;
				temp=temp->next;
				next1=temp->next;
			}
			
		}
	prev->next=next1;
	struct node* temp1=head;
	while(temp1!=NULL)
	{
		
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}			
}
	


