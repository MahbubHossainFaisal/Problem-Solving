#include <iostream>
using namespace std;

struct Node {

 int data;
 struct Node *next;

}*first=NULL;       //this first pointer is declared globally because we will need this to call in the main function



void create(int arr[],int n){

    int i;
    struct Node *t,*last;
    first=new Node;             
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

Node* rotateList(Node* A, int B){
 if(!A or !A->next or B==0) return A;

 struct Node* p = A;
 int Count=1;
 while(p->next!=NULL){
     Count++;
     p=p->next;
 }

 p->next=A;
 B=B%Count;
 B=Count-B;
 cout<<B<<endl;
for(int i=1; i<=B; i++){
    p=p->next;
}
 A=p->next;
 p->next =NULL;
 return A;

}




int main()
{

    int arr[]={91,34,18,83,38,82,21,69};

    create(arr,8);
 
    struct Node* Head = rotateList(first,89);

    Display(Head);
}
