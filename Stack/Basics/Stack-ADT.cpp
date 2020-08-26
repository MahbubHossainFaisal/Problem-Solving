/*Stack Using Array.
Operations:
1.check Empty()
2.check Full()
3.Push()
4.Pop()
5.Peek()
6.Display()

*/

#include<iostream>
using namespace std;

struct Stack
{
    int Size;
    int Top;
    int *s;
};

void createStack(struct Stack *st)
{
    cout<<"Give the size of the stack : ";
    cin>>st->Size;
    cout<<endl<<"Stack Size is : "<<st->Size<<endl;
    st->s=new int[st->Size];
    st->Top=-1;

}
bool isEmpty(struct Stack *st) //checking the stack is empty or not.
{
    if(st->Top==-1)
    return true;
    else
    return false;
}

bool isFull(struct Stack *st)//checking the  stack is full or not
{
    if(st->Top>=st->Size-1)
        return true;
    else
        return false;
}

void Push(struct Stack *st,int x) // We used pointer *st because we will manipulate the structure elements.
{
{
    if(isFull(st))//We are passing the pointer address

            cout<<"Stack overflow!"<<endl;



    else{
        st->Top++;
        st->s[st->Top]=x;
        cout<<x<<" is pushed in the stack"<<endl;
    }
}

int Pop(struct Stack *st) // We used pointer *st because we will manipulate the structure elements.
{
    int x=-1;
    if(isEmpty(st)){
        cout<<"Stack Underflow!"<<endl;
    }
    else{
            x=st->s[st->Top--];
        cout<<x<<" is popped out!"<<endl;
    }
    return x;
}

int peek(struct Stack st,int pos) //This method is used to find the value of a given position in the stack
{
    int x=-1;
    if(st.Top-pos+1 <0){
        cout<<"Invalid Position"<<endl;
    }
    x=st.s[st.Top-pos+1];
}

void Display(struct Stack st)//We didn't use *st pointer because we just want to read the values.Don't want to change it.
{
    cout<<"Stack Elements: "<<endl;
   for(int i=st.Top;i>=0;i--)
   {
       cout<<st.s[i]<<" ";
   }
   cout<<endl;
}



int main()
{
    int index;
    struct Stack st;
    createStack(&st);

    Push(&st,10);
    Push(&st,20);
    Push(&st,30);
    Display(st);//by passing st , we are passing the values.So it is passed by value
    Pop(&st);//while passing &st ,we are passing the address.So it is passed by reference
    Push(&st,50);
    Push(&st,60);
    Display(st);
    cout<<"Enter Position: ";
    cin>>index;

    cout<<"Peek value: ";
    int result = peek(st,index);
    cout<<result;

}



