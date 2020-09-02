/* Drawbacks of Queue:
1.If we run dequeue operation then,in the array front pointer move forwards by
deleting elements from the front.So frond indexes becomes empty.
When Rear pointer becomes equal to Array size-1,That time it make the condition
true that the queue is full but we see clearly that it is not.Because there are
front indexes which are empty.The queue is not full properly.

2.If we dequeue all the elements expect the last element and Rear pointer becomes
equal to Array size-1,That time also the condition of queue become full is  full filled
but we can see clearly that for dequeue of elements the queue is almost empty except the
the last element remaining in the queue.

3.and another example is that,if we dequeue the last element also,
at the last index ,Front and Rear index pointer will point the same index
and the queue empty condition will be full filled .When a queue is empty
we can definitely insert elements in the queue right? But can we do this?
as Rear is equal to Arr.size-1 the Condition also arise that Queue is full.
So,this is another conflict/Drawback of Queue.

To avoid these drawbacks we must use circular Queue.It will omit all the drawbacks
of Queue.
*/

/* We have to make Front and Rear pointers move circularly in the array.
If Rear become full and there are space for inserting elements in the queue ,then
Rear will start to to enqueue elements from the start again and will move to next indexes
Till the previous index of the index which is pointing by Front.because if After inserting,
elements if Rear becomes equal to Front that "Queue is empty" condition will be full filled which
is not true.That's why Rear pointer has to stop one index behind of Front.
The circularity of the Rear and Front pointer can be obtained by MOD operation.
*/



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
    q->Front=q->Rear=0; //initializing the index pointers.
    q->arr=new int[q->Size];
}

void Enqueue(struct Queue *q,int x)
{
//When (Rear+1)%Array Size will be same as the array Front then that time the queue will be full.
    if(((q->Rear+1)%q->Size)==q->Front)
    {
       cout<<"Sorry ! Can't Insert because the Queue is full!"<<endl;
    }
    else{
        q->Rear=(q->Rear+1)%q->Size; //moving Rear pointer by one index circularly
        q->arr[q->Rear]=x;//storing element in the new Rear index
    }

}


int Dequeue(struct Queue *q)
{   int x=-1;
// When Front and Rear variable/index pointer will having the same value,that time the queue will be empty.
    if(q->Front==q->Rear)
        cout<<"Sorry! Queue is empty."<<endl;
    else{
       q->Front=(q->Front+1)%q->Size;//moving Front pointer by one index circularly
       x=q->arr[q->Front];
    }
    return x;
}


void Display(struct Queue q)
{
    cout<<endl<<"Display : ";
    int i=q.Front+1;
    do{
        cout<<q.arr[i]<<" ";
        i=(i+1)%q.Size;
    } while(i!=(q.Rear+1)%q.Size);
    cout<<endl;
}

int main()
{
    struct Queue q;
    cout<<"Give the size of the Queue : ";
    int x;
    cin>>x;
    Create(&q,x);
    Enqueue(&q,0);
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
    Enqueue(&q,60);
    Enqueue(&q,70);
    Enqueue(&q,80);
    Display(q);


}



