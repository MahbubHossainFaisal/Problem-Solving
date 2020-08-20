/* For doing this we need 2 pointers say p and q.
p will point the first node and q will point the first->next node means the second node.
then they will traverse through the linked list with p and q.If p->data and q->data becomes same we will delete q node
and point q to p->next node else will continue to traverse untill q pointer is NULL

*/


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


void removeDuplicates(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
        else
        {
            p=p->next;
            q=q->next;
        }
    }
    cout<<endl;
    Display(first);
}


int main()
{

    int arr[]={2,2,1,1,4,4,8,10,10}; //array must be sorted.
    cout<<"Linked List: ";
    create(arr,9);
    Display(first);
    removeDuplicates(first);






}

