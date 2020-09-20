#include<iostream>
using namespace std;


int main()
{
    int T;
    cin>>T;
   int a,b;
   long long n;

    while(T--)
    {   int a=0;

        cin>>n;
        while(n>0)
        {
            b=n%10;
            a=a*10+b;
            n=n/10;


        }

         cout<<a;





    }
}
