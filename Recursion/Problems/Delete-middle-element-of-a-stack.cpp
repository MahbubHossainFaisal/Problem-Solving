#include <bits/stdc++.h>
using namespace std;

void solve(stack <int> &st, int k)
{
    if(k==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st,k-1);
    st.push(temp);
    return;
}

stack <int> Delete(stack <int> &st, int Size)
{
    if(st.size() == 0) return st;
    int k = (Size/2)+1;

    solve(st,k);
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
    int Size=st.size();
    Delete(st,Size);

   while(!st.empty()) {
        cout << st.top()<<" ";
        st.pop();
    }

}
