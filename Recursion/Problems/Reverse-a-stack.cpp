#include <bits/stdc++.h>
using namespace std;

void Insert(stack <int> &st,int element)
{
    if(st.size()==0){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    Insert(st,element);
    st.push(temp);
    return;
}

stack <int> Reverse(stack <int> &st)
{
    if(st.empty() || st.size()==1)
        return st;
    int temp = st.top();
    st.pop();

    Reverse(st);
    Insert(st,temp);

    return st;

}
int main()
{
    stack <int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    Reverse(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}
