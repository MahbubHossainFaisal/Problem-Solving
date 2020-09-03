/* Normally in Queue,
We use Front pointer to delete elements from the front
and
Rear pointer to insert element from the back.
But
In DEQueue we can use both the pointers for inserting and deleting.
We can use Front pointer to delete elements from front as well as insert elements in front
then we can use Rear pointer to delete elements from rear as well as insert elements in rear.
That is the Double Ended Queue.So it is not FIFO.

Operations:
1.Insert in Front()
2.Delete from Front()
3.Insert in Rear()
4.Delete from Rear()
*/


#include<iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;

}*Front=NULL,*Rear=NULL; //At first both pointers should be null when there is no elements in the queue.

void enqueueInFront(int x)
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
           t->next=Front;
           Front=t;
        }
    }

}
void enqueueInRear(int x)
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


int dequeueFromFront()
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

int dequeueFromRear()
{
    int x=-1;
    struct Node *p=Front;
    if(Front==NULL){
        cout<<endl<<"The queue is empty!"<<endl;
    }
    else{
       while(p->next!=Rear)
       {
           p=p->next;//By doing this p will at last hold the previous node address of the last node
       }
        p->next=NULL;
        x=Rear->data;

       delete Rear;
       Rear=p;

    }
    return x;
}


void Display()
{   cout<<endl<<"Display: ";
    struct Node *p=Front;
    while(p){ //Means while p holds any address.
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    enqueueInFront(10);
    enqueueInFront(20);
    enqueueInFront(30);
    Display();
    enqueueInRear(40);
    enqueueInRear(50);
    enqueueInRear(60);
    Display();
    int result=dequeueFromFront();
    cout<<endl<<result<<" is deleted from the queue!"<<endl;
    Display();
   result= dequeueFromRear();
    cout<<endl<<result<<" is deleted from the queue!"<<endl;
    Display();

}



