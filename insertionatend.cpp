#include <iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
};

node *insert(node **head,int val)
{
    node *ptr=new node;
    ptr->data=val;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=ptr;
    }
    else 
    {
        node *ptr1=*head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
    }
    return *head;
}

void printList(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    int i,n,m;
    cout<<"Enter the size of the List : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>m;
        insert(&head,m);
    }
    cout<<"The List is : ";
    printList(head);
    return 0;
}