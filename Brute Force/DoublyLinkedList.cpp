#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;

}*first;

void Creation(int A[],int n)
{
    struct Node *t,*last;
    first=new Node;
    first->prev=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last=t;
    }
}

int Length(struct Node *p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;


    }
     return len;
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index<0 || index>Length(p))
    {
        return ;
    }
    if(index==0)
    {
        t=new Node;
        t->prev=NULL;
        t->data=x;
        t->next=first;
        first->prev=t;
        first=t;
    }

    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->prev=p;
        t->next=p->next;
        t->data=x;
        if(p->next)
            p->next->prev=t;
        p->next=t;
    }
}


int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};

    Creation(A,9);
    Display(first);
    cout<<endl;
    Insert(first,6,10);
    Display(first);
}
