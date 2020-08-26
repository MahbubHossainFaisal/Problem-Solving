/* In the array method of stack , we always inserted element in the last and
popped from the last.
But for linked list , we will push element in the first because
it will be O(1) times to insert element
int the first Node.The first Node will called the Top of stack.
For popping,We will point a pointer *p to the Top Node ,
We will move the Top Node to Top->next.
Then,We will delete the Node which will be pointed by *p.
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
        cout<<x<<" is popped out!"<<endl;
        delete p;
    }
    return x;

}

void Display(){
    Node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void peek(int pos){
    Node *p=NULL;
if(pos>0)
    p = top;
for(int i=1;p!=NULL && i<=pos-1;i++){
    p=p->next;
}
if(p){
    cout<<p->data<<endl;
}
else{
    cout<<"Invalid position given!"<<endl;
}

}

};


int main()
{
    Stack st;
    int x =0;
    for(int i =1 ; i<=10;i++)
    {

        x=x+10;
        st.push(x);
    }
    st.Display();
    st.pop();
    st.Display();
    cout<<"Enter a position to find it's value in the same position of the stack: ";
    int pos;
    cin>>pos;
    st.peek(pos);
}
