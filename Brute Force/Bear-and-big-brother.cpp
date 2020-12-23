#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;

    int cnt=0;

    while(1)
    {
        a=a*3;
        b=b*2;
        cnt++;
        if(a>b)
        {
            cout<<cnt;
            break;
        }

    }

}
