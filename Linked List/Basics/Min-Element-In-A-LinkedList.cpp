#include<iostream>
using namespace std;

int Min = INT_MAX;

struct Node {

    int data;
    struct Node *next;

}*first=NULL;

void create(int arr[],int n)
{
    int i;
    struct Node *t,*last;
    first = new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t->next;
        last=t;
    }

}

int minElement(struct Node *p)
{
    while(p!=NULL)
    {
       if(p->data<Min)
       {
           Min=p->data;
       }
       p=p->next;
    }
    return Min;
}


int main()
{
    int arr[]= {2,5,1,6,7,4};
    create(arr,6);
    cout<<"Minimum element in the linked list is: "<<minElement(first);

}
