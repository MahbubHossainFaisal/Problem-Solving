/* For merging two linked list the first condition is that both the linked list has to be sorted.
We will have four pointers first,second,third,last.first will point the first linked list's first node
and second will point at second linked list's first node and the third and last pointer will be null.

Initial Steps:
if(first->data<second->data)
    then we will point the third and last pointer to first
    first will then point to first->next
    and last->next has to be made null.
Else
    then we will point the third and last pointer to second
    second will then point to first->next
    and last->next has to be made null.
Repeat method:
Then while any of the pointer(first and last) will not be null we have to traverse through both the linked list.
if(first->data<second->data)
then last->next will point first,last will point first,first will point first->next,last->next will be null.
else
last->next will point second,last will point second ,second will point secon->next,last->next will be null


These will merge the two linked lists.



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

void Merge(struct Node *first,struct Node *second)
{
    struct Node *last=NULL;
    if(first->data < second->data)
    {
        third=first;
        last=first;
        first = first->next;
        last->next = NULL;

    }
    else
    {
        third=second;
        last=second;
        second = second->next;
        last->next = NULL;

    }
    while(first !=NULL && second != NULL)
    {
        if(first->data < second->data)
    {

       last->next=first;
       last=first;
       first=first->next;
       last->next=NULL;

    }
    else
    {
        last->next=second;
        last=second;
        second=second->next;
        last->next=NULL;
    }

    }
    if(first!=NULL)
    {
        last->next=first;
    }
    else
    {
        last->next=second;
    }

}



int main()
{

    int arr[]={2,4,6,8,10};
    int arr2[]={1,4,5,7,9};

    create(arr,5);
    cout<<"First Linked List: "<<endl;
    Display(first);//passing the address of the first Node .
    create2(arr2,5);
    cout<<endl<<"Second Linked List: "<<endl;
    Display(second);
    cout<<endl<<"After merging the linked list has become : "<<endl;
    Merge(first,second);
    Display(third);

}

