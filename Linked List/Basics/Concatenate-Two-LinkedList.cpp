/*
To concate two linked list we have to first create two separate linked list . Then we will define a pointer which will
point to fist linked list.We will make that pointer traverse till the end node of the list.Then we will make the node->next
pointing to second linked list first node.

*/

#include <iostream>
using namespace std;

struct Node {

 int data;
 struct Node *next;

}*first=NULL,*second=NULL,*third=NULL;       //this first pointer is declared globally because we will need this to call in the main function



void create(int arr[],int n){

    int i;
    struct Node *t,*last;
    first=new Node;             // creates a new node and hold the address of the node
    first->data=arr[0];
    first->next=NULL;
    last=first;             //pointing last pointer to the first node.So now first and last two pointers are pointing the same node

    for(i=1;i<n;i++)
    {
        t=new Node;         //creating a Node using a temporary pointer
        t->data=arr[i];
        t->next=NULL;
        last->next=t;       //last->next is storing the address of the new node created by t pointer.
        last=t;

        /*the first pointer will point the first node and the last pointer will point
         every node after it's creation one by one.
         In a word the last pointer will point the last node
         after the creation of linked list is done.*/
    }
}


void create2(int arr[],int n){

    int i;
    struct Node *t,*last;
    second=new Node;             // creates a new node and hold the address of the node
    second->data=arr[0];
    second->next=NULL;
    last=second;             //pointing last pointer to the first node.So now first and last two pointers are pointing the same node

    for(i=1;i<n;i++)
    {
        t=new Node;         //creating a Node using a temporary pointer
        t->data=arr[i];
        t->next=NULL;
        last->next=t;       //last->next is storing the address of the new node created by t pointer.
        last=t;

        /*the first pointer will point the first node and the last pointer will point
         every node after it's creation one by one.
         In a word the last pointer will point the last node
         after the creation of linked list is done.*/
    }
}


void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;          //this is for traversing the whole linked list
    }
}

void concate(struct Node *p,struct Node *q)
{
    third=p;
    while(p->next != NULL)
    {
        p=p->next;
    }
    p->next=q;

}




int main()
{

    int arr[]={2,4,6,8,10};
    int arr2[]={1,3,5,7,9};

    create(arr,5);
    cout<<"First Linked List: "<<endl;
    Display(first);//passing the address of the first Node .
    create2(arr2,5);
    cout<<endl<<"Second Linked List: "<<endl;
    Display(second);
    cout<<endl<<"After concatenation the linked list has become : "<<endl;
    concate(first,second);
    Display(third);

}

