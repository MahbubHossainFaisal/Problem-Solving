/* Queue using Linked List:
We need two address pointers Front and Rear for making the Queue.
First when there is no elements both Front and Rear will be null.
When we will create e first node in the Queue ,then both Front and
Rear will point that node.After that ,for each node being added on the
Queue the Rear pointer will point them and move forwards untill the
last node .
Queue empty condition: when Front==null
Queue Full condition: when after creating a node that node becomes null (means the heap is full)



*/

#include<iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;

}*Front=NULL,*Rear=NULL; //At first both pointers should be null when there is no elements in the queue.

void enqueue(int x)
{
    struct Node *t;
    t=new Node;
    //checking if the queue is full or not.
    //When the heap will be full,then the queue is automatically full because linked list has no limited size.
    if(t==NULL){
        cout<<"The queue is full!!!"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;
        cout<<endl<<t->data<<" is pushed in the queue"<<endl;
        if(Front==NULL) //Checking if the queue is empty.
            Front=Rear=t;
        else{
            Rear->next=t;
            Rear=t;
        }
    }

}

int dequeue()
{
    int x=-1;
    struct Node *p;
    if(Front==NULL){
        cout<<endl<<"The queue is empty!"<<endl;
    }
    else{
        p=Front;
        x=p->data;

        Front=Front->next;
        delete p;
    }
    return x;
}

void Display()
{   cout<<endl<<"Display: ";
    struct Node *p=Front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    Display();
    int result=dequeue();
    cout<<endl<<result<<" is deleted from the queue!"<<endl;
    Display();
     result=dequeue();
    cout<<endl<<result<<" is deleted from the queue!"<<endl;
    Display();
     result=dequeue();
    cout<<endl<<result<<" is deleted from the queue!"<<endl;
    Display();
    enqueue(80);
    enqueue(90);
    enqueue(100);
    Display();

}
