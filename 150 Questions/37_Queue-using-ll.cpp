#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};

class Queue{
public:
    Node *front;
    Node *rear;
    int size;
    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }

    int isEmpty(){
        return size == 0;
    }
    int getSize(){
        return size;
    }

    int frontElement(){
        if(front == NULL){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }

        return front->data;
    }

    void push(int data){
        if(isEmpty()){
            Node* newNode = new Node(data);
            front = newNode;
            rear = newNode;
            size++;
            return;
        }
        Node* newNode = new Node(data);
        rear->next = newNode;
        rear = rear->next;
        size++;

    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* ptr = front;
        front= front->next;
        delete ptr;
        size--;
    }

};


int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    cout<<"size: "<<q.getSize()<<endl;
    cout<<"Front: "<<q.frontElement()<<endl;
    q.pop();
    cout<<"Front: "<<q.frontElement()<<endl;
    q.pop();
    cout<<"Front: "<<q.frontElement()<<endl;
    q.pop();
    cout<<"Front: "<<q.frontElement()<<endl;
    q.pop();
    cout<<"Front: "<<q.frontElement()<<endl;
    q.pop();
    cout<<"Front: "<<q.frontElement()<<endl;
    cout<<"size: "<<q.getSize()<<endl;
    q.pop();
    cout<<"size: "<<q.getSize()<<endl;
    return 0;
}