#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int a[],int n)
{   int i;
    struct Node *t,*last;

    head=new Node;
    head->data=a[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

int Length(struct Node *p)
{
    int len;
    do

    {
        len++;
        p=p->next;

    } while(p!=head);
    cout<<len;
    return len;
}
void Display(struct Node *p)
{
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);



}


void Insert(int pos,int value,int limit)
{
    Node *t,*p;
    int i;
    if(pos==0)
    {
        t=new Node;
        t->data=value;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else
        {
            p=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else

    {
        if(pos<=limit)
        {


        for(i=1;i<=pos-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=value;
        t->next=p->next;
        p->next=t;
    }
}
}

int main()
{
    int a[]={1,2,3,4,5,6};

    create(a,6);

    int x=Length(head);

    Insert(3,7,x);
    Display(head);
}
