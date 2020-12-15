/*
link: https://codeforces.com/contest/1462/problem/C
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        int a=0;
        int b=x;
        int cnt=0;
        int res;
        int minimum = INT_MAX;
        for(int i=1; i<=x/2;i++ )
        {
            if(b<=10)
            {
                cout<<b<<endl;
                break;
            }
            if(b>10)
            {
                int y=b;
                while(y!=0)
                {
                    cnt++;
                    y=y/10;
                }
                if(cnt==2){
                    res=a*100 + b;
                    if(res<minimum) minimum=res;
                }
                if(cnt==1) {

                }
            }
        }

    }
}
