#include <iostream>
using namespace std;

/* To improve the search of element in the   linked list we can do one thing.
If we find the element we want in the list we can move that element's node in first.
So , After that if we search that element  We can find that in the begining of the search.
This is called move to head approach!. */

struct Node {

 int data;
 struct Node *next;

}*first=NULL; //this first pointer is declared globally because we will need this to call in the main function



void create(int arr[],int n){

    int i;
    struct Node *t,*last;
    first=new Node;     // creates a new node and hold the address of the node
    first->data=arr[0];
    first->next=NULL;
    last=first;         //pointing last pointer to the first node.So now first and last two pointers are pointing the same node

    for(i=1;i<n;i++)
    {
        t=new Node;     //creating a Node using a temporary pointer
        t->data=arr[i];
        t->next=NULL;
        last->next=t;   //last->next is storing the address of the new node created by t pointer.
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
            p=p->next;//this is for traversing the whole linked list;
    }
}


Node* Search(struct Node *p,int x)
{
     struct Node *q;

  while(p!=NULL)
  {
      if(p->data == x)
      {
          q->next=p->next;
          p->next=first;
          first=p;
          return p;
      }
      q=p;
      p=p->next;//traversing to next nodes.
  }
  return NULL;

}


int main()
{

    int arr[]={2,4,6,8,10};

    create(arr,5);
    int x;
    Display(first);
    cout<<endl;
    cout<<"Search an element in the linked list: ";
    cin>>x;
    struct Node *t = Search(first,x);
    if(t)
    {
        cout<<t->data<<" is found!"<<endl;
    }
    else
        cout<<"Not found!"<<endl;

       Display(first);



}

