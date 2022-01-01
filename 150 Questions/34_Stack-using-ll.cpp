#include <bits/stdc++.h>
using namespace std;

class Node{
    
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
private:
 Node* head;
 int size;

public:
    Stack(){
        head = NULL;
        size = 0;
    }
    
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }

    void push(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        Node *temp = head;
        head= head->next;
        size--;
        delete temp;
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return head->data;
    }

    

};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<"stack size: "<<s.getSize()<<endl;

    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    cout<<"top: "<<s.top()<<endl;
    s.pop();
    return 0;

}