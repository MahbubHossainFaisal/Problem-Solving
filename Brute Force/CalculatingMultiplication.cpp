#include<iostream>
using namespace std;

int main()
{
    int t,a,b,temp,Count=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        if((a%10)!=0)
        {
            while((a%10)!=0)
            {
                a++;
                Count++;
            }
            cout<<a<<" "<<"x"<<" "<<b<<" "<<"-"<<" "<<Count<<" "<<"x"<<" "<<b<<endl;
            Count=0;
        }
        else
        {
            while((b%10)!=0)
            {
                b++;
                Count++;
            }
            cout<<a<<" "<<"x"<<" "<<b<<" "<<"-"<<" "<<Count<<" "<<"x"<<" "<<a<<endl;
            Count=0;
        }
    }
}
