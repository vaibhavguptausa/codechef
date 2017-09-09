//This is working linked list palindrome

#include <iostream>
using namespace std;

 struct node
{
    int value;
    node *next;
};

void insert_node(node **head,int data)
{
    if(*head==NULL)
    {


    node *temp;
    temp= new node;
    temp->value=data;

    temp->next=NULL;

    *head=temp;

    }


        else
    {
        node *link;
        link=*head;

        while(link->next!=NULL)
        {
           link=link->next;

        }
        node *new_node=new node;
        link->next=new_node;
        new_node->next=NULL;
        new_node->value=data;
    }


}

void display_ll(node *head)
{
    while(head->next!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }
    cout<<head->value<<endl;
}


node *reverse_linked_list(node *head)
{
    node *prev=NULL;
    node *curr=head;
    node *next;


    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }


    return prev ;
    
}



//void palindrome_check(node *head)
//{
//    node *link1=head;node *link2;
//    link2=reverse_linked_list(&link1);
//    int flag=0;
//
//    cout<<"original"<<endl;
//    display_ll(link1);
//    cout<<"reverse"<<endl;
//    display_ll(link2);
//
//
//    if(flag){cout<<"This is not a palindrome"<<endl;}
//    else{cout<<"This is a palindrome"<<endl;}
//
//}

int main()
{
    node *head;
    head=NULL;


    insert_node(&head,121);
    insert_node(&head,132);
    insert_node(&head,14);
    insert_node(&head,13);
    insert_node(&head,12);
    cout<<"original"<<endl;
    display_ll(head);

  node *lala=reverse_linked_list(head);
    cout<<"reverse"<<endl;
    display_ll(lala);

    cout<<"head"<<endl;
    display_ll(head);
    display_ll(head);


    //cout<<"display lala"<<endl;
    //display_ll(lala);

   // palindrome_check(head);

}
