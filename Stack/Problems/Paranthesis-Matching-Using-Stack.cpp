#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int Size;
    int Top;
    int *s;
};

void createStack(struct Stack *st, string s)
{


    st->Size=s.size();

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
    if(isFull(st))//We are passing the pointer address

            cout<<"Stack overflow!"<<endl;



    else{
        st->Top++;
        st->s[st->Top]=x;

    }
}

 void Pop(struct Stack *st) // We used pointer *st because we will manipulate the structure elements.
{
    int x=-1;
    if(isEmpty(st)){
       cout<<"Stack Underflow"<<endl;
    }
    else{
            x=st->s[st->Top--];

    }

}



void Display(struct Stack st)//We didn't use *st pointer because we just want to read the values.Don't want to change it.
{
   // cout<<"Stack Elements: "<<endl;
   for(int i=st.Top;i>=0;i--)
   {
       cout<<char(st.s[i])<<" ";
   }
   cout<<endl;
}
bool isBalance(struct Stack st)
{
    if(isEmpty(&st))
        return true;
    else
        return false;
}


int main()
{
    int i;
    cout<<"Give the string that contains parenthesis : ";
    string s;
    cin>>s;
    struct Stack st;
    createStack(&st,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            Push(&st,s[i]);
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(s[i]==')'){
                if(st.s[st.Top]=='(')
                    Pop(&st);
            }
            else if(s[i]=='}'){
                if(st.s[st.Top]=='{')
                    Pop(&st);
            }
            else if(s[i]==']'){
                if(st.s[st.Top]=='[')
                    Pop(&st);
            }
        }

    }

    cout<<"After Balancing: ";
    Display(st);
    cout<<endl;

    if(isBalance(st))
    {
        cout<<endl<<"The Parenthesis are balanced!"<<endl;
    }
    else{
        cout<<endl<<"The parenthesis are not balanced!"<<endl;
    }


}



