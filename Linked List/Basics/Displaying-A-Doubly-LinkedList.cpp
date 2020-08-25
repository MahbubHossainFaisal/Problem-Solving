/*
Doubly linked list works same as linear one but it has an extra previous node
 by which we can traverse reversely or which can has the previous node's addresses as well.
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
 {
     while(p)
     {
         cout<<p->data<<" ";
         p=p->prev;
     }
     cout<<endl;
 }


 int main()
 {
     int arr[]={2,4,6,8,10};
     Create(arr,5);
     Display(first);
     Reverse(last);
 }
