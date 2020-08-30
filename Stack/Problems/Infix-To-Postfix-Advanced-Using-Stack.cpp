

/*
  Symbol  :  out stack precedence   :  In stack precedence  :  Associativity

  (+,-)   :             1             :         2           :    L->R

  (*,/)   :             3             :         4           :    L->R

  (^)     :             6             :         5           :    R->L  (this is different than others because it is right,left associativity)

  ("(")   :             7             :         0           :    L->R

  (")")   :             0             :   we won't push it. :    L->R



*/

/*
Example: String -> ((a+b)*c)-d^e^f

let say, op= out stack precedence
         ip=inside stack precedence
         After being pushed in the stack ,elements will behave as according to the inner stack precedence ip

( ->  op=7 -> push('(') -> Stack:(
                                  ( ->  op=7 -> push('(') -> Stack:((
a ->  direct send to postfix array -> postfix:a
+ ->  op=1 ,this is > than stack top element precedence -> push(+) -> Stack:((+
b ->  direct send to postfix array -> postfix:ab
) ->  op=1 ,this is < than stack top element precedence -> pop() stack top and send it to the postfix array. postfix:ab+ -> Stack: ((
) ->  op=1 ,this is = stack top element precedence -> pop() just -> Stack:( -> move to the next string element
* ->  op=3 ,this is > than stack top element precedence -> push(*) -> Stack:(*
c ->  direct send to postfix array -> postfix:ab+c
) ->  op=1 ,this is < than stack top element precedence -> pop() stack top and send it to the postfix array. postfix:ab+c* -> Stack: (
) ->  op=1 ,this is = stack top element precedence -> pop() just -> Stack:( -> move to the next string element
- ->  - ->  op=2 ,this is > than stack top element precedence -> push(*) -> Stack:-
d ->  direct send to postfix array -> postfix:ab+c*d
^ ->  op=6 , this is > than stack top element precedence -> push(^) -> Stack:-^
e ->   direct send to postfix array -> postfix:ab+c*de   (because in the stack ^ precedence is 5)
^ ->  op=6 , this is > than stack top element precedence -> push(^) -> Stack:-^^
f ->  direct send to postfix array -> postfix:ab+c*def
So,the string elements has finished but we have elements remaining on the stack , we will pop them one by one and add them in postfix array
Finally, The postfix array will become : ab+c*def^^- ,which is the postfix of ((a+b)*c)-d^e^f

*/



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

//returning the precedences of the operator when outside of the stack using the below function
int OutStackPrecedence(char x){
    if(x=='+' || x=='-')
        return 1;
   else if(x=='*' || x=='/')
    return 3;
   else if(x=='^')
    return 6;
   else if(x=='(')
    return 7;
   else if (x==')')
    return 0;
}

int InStackPrecedence(char x){
    if(x=='+' || x=='-')
        return 2;
   else if(x=='*' || x=='/')
    return 4;
   else if(x=='^')
    return 5;
   else if(x=='(')
    return 0;
    else
    return -1;

}


int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^'  || x=='(' || x==')' )

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
                if(OutStackPrecedence(infix[i])== 0){
                    if(InStackPrecedence(top->data)==OutStackPrecedence(infix[i])){
                        pop();
                        i++;
                    }
                    else{
                        postfix[j++]=pop();
                    }
                }

              else  if(OutStackPrecedence(infix[i])>InStackPrecedence(top->data)){ //To check this,We have to have an initial element in the stack.So,in the main function we pushed one element initially else the condition won't work because stack->top is null
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
    string infix ;
    cin>>infix;
    cout<<"INFIX: "<<infix<<endl;
    Stack st;
    st.push('.');//We have to first push  any one element to the stack
    cout<<"POSTFIX: ";
   st.InfixToPostfix(infix);


}
