
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


void deleteANode(struct Node *p,int pos)
{
    if(pos == 1)
    {
        first = first->next;
        int x = p->data;
        cout<<x<<" is deleted from the linked list!"<<endl;
        delete p;
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


int main()
{

    int arr[]={2,4,6,8,10}; //array must be sorted.
    cout<<"Linked List: ";
    create(arr,5);
    Display(first);
    int pos;
    cout<<endl<<"Enter a position to delete in a linked list: ";
    cin>>pos;
    deleteANode(first,pos);





}
