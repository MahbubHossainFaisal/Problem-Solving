/*
For reversing a linked list we will need three pointers say p,q,r.Where at first p will pointing to first node
and q and r will null.We will make this pointers traverse the whole list together but pointing different nodes.
like if p is pointing the third node ,q will point the second node and p will point the first node.
Then we will change q->next address to r address.After all the traverse the linked list will be reversed.

*/
#include <iostream>
using namespace std;

struct Node {

 int data;
 struct Node *next;

}*first=NULL;       //this first pointer is declared globally because we will need this to call in the main function



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

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;          //this is for traversing the whole linked list
    }
}


void reverseList(struct Node *p)
{
    struct Node *q,*r;
    q=NULL;
    r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first = q;
}




int main()
{

    int arr[]={2,4,6,8,10};

    create(arr,5);
    Display(first);//passing the address of the first Node .

    reverseList(first);
    cout<<endl<<"After reversin the linked list is: "<<endl;
    Display(first);
}
