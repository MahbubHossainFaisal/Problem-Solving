#include <iostream>
using namespace std;

/* Inserting in a linked list can be in two ways
1.Inserting before first index
2.Inserting after given position

Steps:(Inserting before first node)
1. Create a node
2. Initialize it with data
3. node->next will be the address of current first node
3.First pointer will be addressed the new node as first node.

Steps: (Inserting after a given position)
1. create a new pointer p and point to first node;
2. Traverse with the p pointer till the given node position minus one times.(means if position is 4,move p for 3 times.)
3. create a new node t;
4. node->next will be p->next
5. p->next will be t;

*/


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



void InsertAfterPosition(int pos,int x)
{
    if(pos==0)
    {
    struct Node *p=new Node;
    p->data=x;
    p->next=first;
    first = p;
    }

    else if(pos>0)
    {
         struct Node *p,*temp;
    p=first;
    for(int i = 1 ; i <= pos-1 && p; i++)
    {
        p=p->next;
    }
    if(p)
    {
    temp=new Node;
    temp->data=x;
    temp->next=p->next;
    p->next=temp;

    }
    else
    {
        cout<<"Give proper position."<<endl;
    }

    }

}



int main()
{

    int arr[]={2,4,6,8,10};

    //create(arr,5);
    Display(first);//passing the address of the first Node .


    InsertAfterPosition(0,1); //First position must be given first manually
    int k=1;
    for(int i =1 ; i<100000; i++)
    {
        InsertAfterPosition(i,++k);
    }

    Display(first);



}

