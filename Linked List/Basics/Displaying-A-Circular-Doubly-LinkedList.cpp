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
     first->prev=NULL;
     first->next=first;
     last=first;
     for(i=1;i<n;i++)
     {
        t=new Node;
        t->data=arr[i];

        t->prev=last;
        t->next=first;
        last->next=t;
        first->prev=t;
        last=t;
     }
 }

 void Display(struct Node *p)
 {
    do{
         cout<<p->data<<" ";
         p=p->next;
     }
     while(p!=first);

     cout<<endl;
      for(int i=0;i<10;i++) //checking it has become circular or not.
   {
       cout<<p->data<<" ";
       p=p->next;
   }
   cout<<endl;
 }

 void Reverse(struct Node *p)
 {
   for(int i=0;i<10;i++) //checking it has become circular or not.
   {
       cout<<p->data<<" ";
       p=p->prev;
   }

 }





 int main()
 {
     int arr[]={2,4,6,8,10};
     Create(arr,5);
     Display(first);
     Reverse(last);

 }

