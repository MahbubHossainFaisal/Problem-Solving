/* In short in doubly linked list if we interchange the addresses the nodes are holding
like the node-> will hold the next node's address instead of the previous node
and the node->next will hold the previous node's address instead of the next node,then
the doubly linked list will be reversed by doing that.
*/




#include<iostream>
 using namespace std;

 struct Node
 {
     struct Node *prev;
     int data;
     struct Node *next;
 }*first=NULL,*last=NULL;


 void Create(int arr[],int n)
 {
     struct Node *t;
     int i;
     first=new Node;
     first->data=arr[0];
     first->prev=first->next=NULL;
     last=first;
     for(i=1;i<n;i++)
     {
        t=new Node;
        t->data=arr[i];
        t->prev=last;
        t->next=NULL;
        last->next=t;
        last=t;
     }
 }

 void Display(struct Node *p)
 {
     while(p)
     {
         cout<<p->data<<" ";
         p=p->next;
     }
     cout<<endl;
 }


 void Reverse(struct Node *p)
 {  struct Node *temp;

     while(p!=NULL)
     {temp=p->next;
     p->next=p->prev;
     p->prev=temp;
     p=p->prev;
     if(p!=NULL && p->next==NULL)
        first=p;

     }
 }


 int main()
 {
     int arr[]={2,4,6,8,10};
     Create(arr,5);
     Display(first);
     Reverse(first);
     Display(first);

 }
