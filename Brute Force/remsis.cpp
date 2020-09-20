#include<iostream>
using namespace std;
int main()
{int T,A,B;
cin>>T;
while(T--)
{
    cin>>A>>B;
    if(A<B)
    {
        cout<<B<<" "<<A+B<<endl;
    }
    if(B<A)
    {
        cout<<A<<" "<<A+B<<endl;
    }


}}
