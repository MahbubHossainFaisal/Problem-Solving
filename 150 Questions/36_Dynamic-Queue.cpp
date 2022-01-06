#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

    Queue(){
        capacity = 5;
        arr = new int[capacity];
        front = -1;
        rear = 0;
        size = 0;
    }

    

    bool isEmpty(){
        return size == 0;
    }

    int getSize(){
        return size;
    }
    int Front(){
        if(size == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }        
        return arr[front];
    }
    

    void push(int ele){
        if(size == capacity){
            int *newArr = new int[capacity*2];
            int j=0;
            for(int i=front; i<capacity; i++){
                newArr[j++] = arr[i];
            }
            for(int i=0; i<front; i++){
                newArr[j++] = arr[i];
            }
            front = 0;
            rear = capacity;
            capacity = capacity*2;
            delete []arr;
            arr = newArr;

        } 
        arr[rear] = ele;
        if(front == -1) front = 0;
        //cout<<"rear: "<<arr[rear]<<endl;
        rear = (rear+1)%capacity;
        size++;
    }

    void pop(){
        if(isEmpty()) {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        front = (front+1)%capacity;
        size--;
    }

   
};

int main(){
    Queue q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    
    cout<<"front: "<<q.Front()<<endl;
    cout<<"Size of queue: "<<q.getSize()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    q.pop();
    cout<<"front: "<<q.Front()<<endl;
    


    
    return 0;

}