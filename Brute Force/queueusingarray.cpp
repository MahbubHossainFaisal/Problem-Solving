#include<iostream>
using namespace std;

class Queue
{
private:
    int Front;
    int Rear;
    int Size;
    int *Q;
public:
    Queue()
    {
        Front=Rear=-1;
        Size=10;
        Q=new int[Size];
    }
    Queue(int Size)
    {
        Front=Rear=-1;
        this->Size=Size;
        Q=new int[this->Size];
    }
    void Enqueue(int x);
    int Dequeue();
    void Display();
};

void Queue::Enqueue(int x)
{
    if(Rear==Size-1)
    {
        cout<<"Queue is full!!!"<<endl;
    }
    else
    {
        Rear++;
        Q[Rear]=x;
        cout<<x<<"is"<<"Enqueued"<<endl;

    }
}
int Queue::Dequeue()
{   int x=-1;
    if(Front==Rear)
    {
        cout<<"Queue is empty!!!"<<endl;
    }
    else
    {
       x=Q[Front+1];
       Front++;
       cout<<"Dequeued"<<endl;
    }
}

void Queue::Display()
{
    for(int i=Front+1;i<=Rear;i++)
    {
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Queue q(8);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Display();
    q.Dequeue();
    q.Display();

    q.Display();
    q.Dequeue();
    q.Display();

}
