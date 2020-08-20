
#include <iostream>
using namespace std;

struct Node {

 int data;
 struct Node *next;

}*first=NULL; //this first pointer is declared globally because we will need this to call in the main function



void create(int arr[],int n){

    int i;
    struct Node *t,*last;
    first=new Node;// creates a new node and hold the address of the node
    first->data=arr[0];
    first->next=NULL;
    last=first;//pointing last pointer to the first node.So now first and last two pointers are pointing the same node

    for(i=1;i<n;i++)
    {
        t=new Node;//creating a Node using a temporary pointer
        t->data=arr[i];
        t->next=NULL;
        last->next=t;//last->next is storing the address of the new node created by t pointer.
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


void insertInASortedList(struct Node *p,int x)
{
    if(x < first->data) //if x is smaller than the first node data we have to create a node using x and make it the first node
    {
        struct Node *t=new Node;
        t->data=x;
        t->next=first;
        first=t;


    }
    else
    {
    struct Node *q, *temp;
    q=NULL;
    while(p && p->data<x)
    {
        q=p;
        p=p->next;
    }
    temp=new Node;
    temp->data = x;
    temp->next=q->next;
    q->next=temp;
    }

}


int main()
{

    int arr[]={2,4,6,8,10}; //array must be sorted.

    create(arr,5);
    int x;
    cout<<"Enter a number to insert in a sorted linked list: ";
    cin>>x;
    insertInASortedList(first,x);
    Display(first);





}
