
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    char data;
    Node *next;
};

class Stack{

private:
    Node *top; //this top pointer will always point the stack top element
public:
    Stack(){
    top=NULL;//initialization
    }
void push( int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Stack is full"<<endl;
    }
    else{
        t->data=x;
        t->next=top; //making the t node linked to the top node
        top=t;//making top pointing to the t node which is the top element now.
    }
}

char pop(){
     int x=-1;
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        Node *p=top;
        top=top->next;
        x=p->data;

        delete p; //deleting the top element from the stack
    }
    return x;

}

//returning the precedences of the operator using the below function
int precedence(char x){
    if(x=='+' || x=='-')
        return 1;// because precedence of +,- is 1
   else if(x=='*' || x=='/')
    return 2; //because precedence of *,/ is 2
   else
    return 0; //if there is no operator
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0; //means they are not operand(letters)
    else
        return 1;
}

void InfixToPostfix(string infix)
    {
        int i=0,j=0;
        char *postfix = new char[infix.size()]; //creating a char array of the size of the infix string.We have to make the size infix.size()+1 because at last we will also add a \0 in the char array
        while(i!=infix.size())
        {
            if(isOperand(infix[i])){
                postfix[j++]=infix[i++]; //if the element of the infix array is an operand than direct send it to postfix array
            }
            else{
                if(precedence(infix[i])>precedence(top->data)){ //To check this,We have to have an initial element in the stack.So,in the main function we pushed one element initially else the condition won't work because stack->top is null
                    push(infix[i++]); //else check the operator of the array is > than the stack top element .If so,then push it to the stack
                }
                else{
                    postfix[j++]=pop();//if the operator is <= stack top,send the operator to the postfix array
                }
            }
        }
        while(top!=NULL) //this while loop is used because after the previous loop finished,we can have more elements remaining in the stack.So,we have to pop() them and send them to postfix array.
            postfix[j++]=pop();
            postfix[--j]='\0'; //we have to make the char array's last index \0 else the char array can show garbage value.We are also decreasing the the index and storing the \0 into that index because we don't want the initial element to show on the screen which we have pushed initially.
       cout<<postfix;//printing the postfix of the infix string.

    }


};


int main()
{
    string infix = "a+b*c/e+f*g+h-i/j/l";
    cout<<"INFIX: "<<infix<<endl;
    Stack st;
    st.push('.');//We have to first push  any one element to the stack
    cout<<"POSTFIX: ";
   st.InfixToPostfix(infix);


}
