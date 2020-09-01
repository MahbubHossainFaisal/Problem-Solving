
/* Queue Abstract Data Type:

A queue follows the FIFO method (First In First Out)
Data:
1. It needs space for storing elements.
2. Front pointer (To delete elements)
3. Rear pointer (To insert elements)
Operations:
1.Enqueue(int x)
2.Dequeue()
3.isFull()
4.isEmpty()
5.First(); for showing the first element in  the queue
6.Last(); for showing the last element in the queue.
Implementation:
1.We can implement queue using an array.
2.We can implement queue using linked lists.
*/

/*Implementation of Queue using array:
1.We need a array to store the elements of the queue.So,We need a fixed size.
2.We need two pointers : front and rear(which will point the indexes but not an address pointer)
    and *arr.(*arr will make the array dynamically later).
3.We will make a structure of using these four and perform other operations. */


#include<iostream>
using namespace std;

struct Queue
{
    int Size;
    int Front;
    int Rear;
    int *arr;

};

void Create(struct Queue *q,int x)
{
    q->Size=x;
    q->Front=q->Rear=-1; //initializing the index pointers.
    q->arr=new int[q->Size];
}

void Enqueue(struct Queue *q,int x)
{
//When Rear will be same as the array size-1 then that time the queue will be full.
    if(q->Rear==q->Size-1)
    {
       cout<<"Sorry ! Can't Insert because the Queue is full!"<<endl;
    }
    else{
        q->Rear++; //increasing Rear pointer by one index
        q->arr[q->Rear]=x;//storing element in the new Rear index
    }

}


int Dequeue(struct Queue *q)
{   int x=-1;
// When Front and Rear variable/index pointer will having the same value,that time the queue will be empty.
    if(q->Front==q->Rear)
        cout<<"Sorry! Queue is empty."<<endl;
    else{
        q->Front++; //increasing the front index pointer by one
        x=q->arr[q->Front];//storing which element we are deleting
        q->arr[q->Front]=-1;
//We have to do a lot of work to delete elements in array
//So converting the value in -1 we are assuming that we have deleted the elements.
    }
    return x;
}


void Display(struct Queue q)
{
    cout<<endl<<"Display : ";
    int i;
    for(i=q.Front+1 ; i<=q.Rear; i++)
    {
        cout<<q.arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    struct Queue q;
    cout<<"Give the size of the Queue : ";
    int x;
    cin>>x;
    Create(&q,x);
    Enqueue(&q,10);
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);
    Display(q);
    cout<<Dequeue(&q)<<" is deleted!"<<endl;
    Display(q);
    cout<<Dequeue(&q)<<" is deleted!"<<endl;
    Display(q);
    cout<<Dequeue(&q)<<" is deleted!"<<endl;
    Display(q);
    cout<<Dequeue(&q)<<" is deleted!"<<endl;
    Display(q);
    //Checking deleted elements.
    for(int i=0;i<6;i++)
    {
        cout<<q.arr[i]<<" ";//the elements who have value -1 are the deleted elements we are assuming.
    }

}


