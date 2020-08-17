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




//We can use tail recursion method to reversely show the linked list.
void reverseDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        reverseDisplay(p->next);
        cout<<p->data<<" ";
    }
}



int main()
{

    int arr[]={2,4,6,8,10};

    create(arr,5);

    cout<<endl;
    reverseDisplay(first);
}

