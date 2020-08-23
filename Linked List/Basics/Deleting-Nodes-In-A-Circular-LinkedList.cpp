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
    first->next=first;    //in circular linked list node->next can't be null.As a first node it will point itself to be circular.
    last=first;             //pointing last pointer to the first node.So now first and last two pointers are pointing the same node

    for(i=1;i<n;i++)
    {
        t=new Node;         //creating a Node using a temporary pointer
        t->data=arr[i];
        t->next=last->next; //in circular linked list node->next can't be null
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
       do {
        cout<<p->data<<" ";
        p=p->next;          //this is for traversing the whole linked list.We have to use do while loop
        } while(p!=first); //in terms of circular linked list because if we use while loop with the condition
                            //p!=first the loop won't run because  at first p is already pointing to first.so
                            //we have to make the loop iterate after first time when the p pointer will point in second node.


}



void deleteANode(struct Node *p,int pos)
{
    if(pos == 1)
    {   struct Node *t=first;
    while(t->next!=first) //We are using this pointer to just go to the last index and hold the address of this because it will be needed later to point the new first node.
    t=t->next;

    first = first->next;
    int x = p->data;
    cout<<x<<" is deleted from the linked list!"<<endl;
    delete p;
    t->next=first;
    Display(first);
    cout<<endl<<"first has become :"<<first->data<<endl;

    }
    else
    {
        struct Node *q=NULL;
        int i,x;
        for(i=1;i<=pos-1;i++)
        {
            q=p;// q will always stay one node behind from p.
            p=p->next;
            if(!p) //we have to check whether p points to a address or not
            {
                break;
            }
        }

        if(p)
        {
            q->next=p->next;
        x=p->data;
        cout<<x<<" is deleted from the linked list!"<<endl;
        delete p;
        cout<<"Remaining Linked List elements are: "<<endl;
        Display(first);

        }
        else
        {
            cout<<"Enter a proper position"<<endl;
        }
    }
}

void checkCircular(struct Node *p)
{
    for(int i = 1 ; i<=10; i++)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


int main()
{

    int arr[]={2,4,6,8,10};
    cout<<"Linked List: ";
    create(arr,5);
    Display(first);
    int pos;
    cout<<endl<<"Enter a position to delete in a linked list: ";
    cin>>pos;
    deleteANode(first,pos);
    checkCircular(first); //Checking for the linked list is circular or not.



}



