#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first;

void Create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void Display(struct Node *p)
{
    cout<<"ELEMENTS IN THE LINKED LIST ARE:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void Reverse()
{
struct Node *p,*q,*r;

p=first;
q=NULL;
r=NULL;
while(p!=NULL)
{
    r=q;
    q=p;
    p=p->next;
    q=r->next;
}
first=q;

while(q!=NULL)
{
    cout<<q->data<<" ";
    q=q->next;
}
cout<<endl;

}

int Count(struct Node *p)
{
    int x=0;
    if(p!=NULL)
    {
        return Count(p->next)+1;
    }

    else
        return 0;

}



void sum(struct Node *p)
{
    int add=0;
    while(p!=NULL)
    {
        add=add+p->data;
        p=p->next;
    }
    cout<<add<<endl;
}

void Max(struct Node *p)
{
    int x=-32768;
    while(p!=NULL)
    {
        if(x<p->data)
        {
            x=p->data;

        }
        p=p->next;
    }
    cout<<x<<endl;
}

void Search(struct Node *p,int element)
{
    while(p!=NULL)
    {
        if(p->data==element)
        {    cout<<"ELEMENT FOUND!"<<endl;
            cout<<p<<endl;
            break;
        }

        p=p->next;
    }
    if(p==NULL)
    {
        cout<<"ELEMENT NOT FOUND!"<<endl;
    }

}

void Insert(int value,int pos)
{
    struct Node *p,*t;
    if(pos==0)
    {
        t=new Node;
        t->data=value;
        t->next=first;
        first=t;
    }

    else if(pos>0)
    {
        p=first;

        for(int i=1;i<=pos-1 && p!=NULL;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=value;
        t->next=p->next;
        p->next=t;
    }
    else
    {
        cout<<"INVALID!!! Give a valid pos!!!"<<endl;
    }
}

void Delete(int pos)
{
    struct Node *p,*q;
    int x=-1;
    int i;

    if(pos==1)
    {
        p=first;
        x=first->data;
        first=first->next;
        delete p;
        cout<<"Node is deleted!!!"<<endl;
        cout<<"Element was: "<<x<<endl;

    }

    else
    {
        p=first;
        q=NULL;

        for(i=1;i<=pos-1 && p!=NULL; i++)
        {
            q=p;
            p=p->next;
        }
        if(p!=NULL)
        {
            q->next=p->next;
            x=p->data;
            delete p;
        cout<<"Node is deleted!!!"<<endl;
        cout<<"Element was: "<<x<<endl;

        }
        if(p==NULL)
        {
            x=p->data;
            delete p;
        cout<<"Node is deleted!!!"<<endl;
        cout<<"Element was: "<<x<<endl;
        }
    }
}

bool SortedOrNot()
{
    struct Node *p;
    p=first;
   int x=-32768;
    while(p!=NULL)
    {
        if(x>p->data)
        {
            return false;
            break;

        }
        x=p->data;
        p=p->next;
    }
    return true;
}





int main()
{
    int a[]={10,10,14,16,18,22,22,24};

    Create(a,8);

    Display(first);

    cout<<endl;
    cout<<"TOTAL NUMBER OF NODES:"<<endl;
    int x=Count(first);
    cout<<x<<endl;

    cout<<"THE TOTAL SUMMATION OF THE NODE ELEMENTS IS:"<<endl;
    sum(first);

    cout<<"THE MAXIMUM ELEMENT IN THE LINKED LIST IS :"<<endl;
    Max(first);


    cout<<"WANT TO FIND THE ADDRESS OF AN ELEMENT? ENTER AN ELEMENT:"<<endl;
    int element;
    cin>>element;
    Search(first,element);

    cout<<"WANNA INSERT ANY ELEMENT? GIVE VALUE & POSITION WHICH THE VALUE WILL BE INSERTED:"<<endl;
    int value;
    cin>>value;
    int position;
    cin>>position;
    Insert(value,position-1);

    cout<<"AFTER INSERTION THE LINKED LIST HAS BECOME:"<<endl;
    Display(first);

    cout<<"WANNA DELETE ANY ELEMENT? GIVE A POSITION YOU WANT TO DELETE:"<<endl;
    cin>>position;
    Delete(position);

    cout<<"CHECKING THE LIST IS SORTED OR NOT:"<<endl;
    bool y=SortedOrNot();
    if(y==0)
        cout<<"FALSE"<<endl;
    else
        cout<<"TRUE"<<endl;

   // cout<<"Removing Duplicates from List:"<<endl;
    //RemoveDuplicates();
    //Display(first);

     cout<<"HERE IS THE REVERSE OF THE LINKED LIST ELEMENTS:"<<endl;
    Reverse();



}
