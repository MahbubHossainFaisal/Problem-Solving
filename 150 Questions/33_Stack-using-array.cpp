#include <bits/stdc++.h>
using namespace std;

class Stack{
private:
    int *arr;
    int nextIndex;
    int capacity;
public:
    Stack(){
        capacity = 4;
        arr = new int[capacity];
        nextIndex = 0;
    }
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        nextIndex = 0;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    int top(){
        if(isEmpty()) return -1;
        return arr[nextIndex-1];
    }

    void push(int element){
        if(nextIndex == capacity){
            cout<<"Stack is full"<<endl;
            return;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }

    void pop(){
        if(isEmpty()) {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        nextIndex--;

    }
    int size(){
       return nextIndex;
    }
};

int main(){

    Stack s(10);

    for(int i=1; i<=10; i++){
        s.push(i);
    }

    while(!s.isEmpty()){
        int top = s.top();
        cout<<"Top element: "<<top<<endl;
        s.pop();
    }

    return 0;

}