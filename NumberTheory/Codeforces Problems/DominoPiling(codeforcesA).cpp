#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N;
    cin>>M>>N;
    int c=M*N;
    int Count=0;
    int a=0;
    while(a<=c)
    {
        a=a+2;

        if(a>c)
        {
            break;
        }
        Count++;
    }
    cout<<Count;
}
