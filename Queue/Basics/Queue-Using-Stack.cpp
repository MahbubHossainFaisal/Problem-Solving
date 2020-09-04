
/* Queue implementation using 2 stack:
We need two stacks for implementing the queue ,Stack1 and Stack2
When we want to enqueue an element,we will push that element in
the Stack1 . Every time we want to enqueue an element we will do
the same.Then,when we want to dequeue an element we have to pop()
elements from Stack1 one by one and push them in Stack2.After pushing
all the elements we have got from Stack1 in Stack2,we will then delete
the top element of Stack2.So,this is the concept of making queue using
2 stack.For each dequeue we have to pop() top element from the Stack2.
Only when Stack2 will become empty ,then if items remains in Stack1 and
We want to dequeue again,We will pop() all elements from Stack1 and push
them in Stack2.Then we will again start deleting the top elements from
the Stack2.So for enqueue,we will push elements in Stack1 and for dequeue
we will pop() elements from Stack2.If Stack2 becomes empty and Stack1
till contains elements,then we will pop() elements from Stack1 and start
pushing them in Stack2 and then again start deleting top elements from
Stack2.
*/


#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
};

class Stack{

private:
    Node *top;
public:
    Stack(){
    top=NULL;
    }
void push(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Stack is full"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;

    }
}

int pop(){
    int x=-1;
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        Node *p=top;
        top=top->next;

        x=p->data;

        delete p;
    }
    return x;

}




void enqueue(int x){
    push(x);
    cout<<endl<<x<<" is pushed in the queue"<<endl;
}

int dequeue(Stack *st1,Stack *st2)
{
    int x=-1;
    if(st2->top==NULL) {
        if(st1->top==NULL)
        {
            cout<<"Queue is empty!"<<endl;
        }
        else{
            while(st1->top!=NULL){
                x=st1->pop();
                st2->push(x);
            }
            x=st2->pop();
             cout<<x<<" is popped out!"<<endl;
             return x;


        }
    }
    else {
            x=st2->pop();
    cout<<endl<<x<<" is popped out!"<<endl;
        return  x;
    }
}

void Display(Stack *st1,Stack *st2,Stack *st3)
{
int x;
cout<<endl<<"Display: ";
    Node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }


    if(st1->top!=NULL){
          while(st1->top!=NULL){
                x=st1->pop();
                st3->push(x);
    }
    Node *t=st3->top;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
     if(st3->top!=NULL){
        while(st3->top!=NULL){
                x=st3->pop();
                st1->push(x);
     }

     }
}
}

};




int main()
{
    Stack st1,st2,st3;
    st1.enqueue(10);
    st1.enqueue(20);
    st1.enqueue(30);
    st1.enqueue(40);
    st2.dequeue(&st1,&st2);
    st2.dequeue(&st1,&st2);

    st2.Display(&st1,&st2,&st3);
    st1.enqueue(50);
    st1.enqueue(60);
    st2.dequeue(&st1,&st2);
    st2.Display(&st1,&st2,&st3);


    st1.enqueue(70);
    st1.enqueue(80);
    st2.dequeue(&st1,&st2);
    st2.Display(&st1,&st2,&st3);

     st1.enqueue(90);
    st1.enqueue(100);
    st2.dequeue(&st1,&st2);
    st2.Display(&st1,&st2,&st3);
    st2.dequeue(&st1,&st2);
    st2.dequeue(&st1,&st2);
    st2.dequeue(&st1,&st2);
    st2.dequeue(&st1,&st2);
    st2.Display(&st1,&st2,&st3);
     st1.enqueue(110);
      st1.enqueue(120);
      st1.enqueue(130);
      st1.enqueue(140);
      st1.enqueue(150);
       st2.Display(&st1,&st2,&st3);


}




