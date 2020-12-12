
#include<bits/stdc++.h>
using namespace std;

void insert_in_stack(stack <int> &st,int temp)
{
    if(st.size()==0 || st.top()<= temp)
    {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert_in_stack(st,temp);
    st.push(val);
    return;

}

void sort_stack(stack <int> &st)
{
    if(st.size()==1)
        return;
    int temp = st.top();
    st.pop();
    sort_stack(st);
    insert_in_stack(st,temp);
    return;
}


int main()
{
    stack <int> st;
    st.push(0);
    st.push(2);
    st.push(1);
    st.push(7);
    st.push(10);
    st.push(20);

    sort_stack(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }


}
