
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

void InsertAfterPosition(int pos,int x)
{
    if(pos==0)
    {
    struct Node *p=new Node;
    p->data=x;
    p->prev=NULL;
    p->next=first;
    first->prev=p;
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
    temp->prev=p;
    temp->next=p->next;
    if(p->next!=NULL)
        p->next->prev=temp;
    p->next=temp;
    if(temp->next==NULL)
        last=temp;



    }
    else
    {
        cout<<"Give proper position."<<endl;
    }

    }

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


 void Delete(int pos)
 {
     struct Node *p;
     if(pos==1)
     {
         p=first;
         first=first->next;
         if(first)
            first->prev=NULL;
         int x=p->data;
         cout<<x<<" is deleted from the list."<<endl;
         delete p;
     }
    else if(pos>1)
     {
         p=first;
         for(int i =1 ; i <= pos-1 ; i++)
         {
             p=p->next;
         }
         if(p)
         {
             p->prev->next=p->next;
         if(p->next)
            p->next->prev=p->prev;
        if(p->next==NULL)
            last=p->prev;
         int x=p->data;
         cout<<x<<" is deleted from the list."<<endl;
         delete p;
         }
         else
         {
             cout<<"Give a proper position to delete!"<<endl;
         }
     }

 }

 int main()
 {
     int arr[]={2,4,6,8,10};
     Create(arr,5);
     Display(first);
     cout<<endl<<"Insert position and element: "<<endl;
     int pos,x;
     cin>>pos>>x;
     InsertAfterPosition(pos,x);
     cout<<endl;
     Display(first);
     cout<<endl;
     Reverse(last);
     cout<<endl<<"Insert a position to delete: "<<endl;
     cin>>pos;
     Delete(pos);
     Display(first);
     Reverse(last);
 }

