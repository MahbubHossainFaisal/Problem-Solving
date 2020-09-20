#include<iostream>
using namespace std;

int main()
{ int a,b,c,n,t;
    int x;
    cin>>x;
    while(x--)
    {

        cin>>a>>b>>c>>n;

        if(b>a && b>c)
        {
            t=b;
            b=a;
            a=t;
        }
         if(c>a && c>b)
        {
            t=c;
            c=a;
            a=t;
        }

        if(a>b && a>c)
        {
            while(b!=a)
            {
                if(n==0)
                {
                    break;
                }
                b=b+1;
                n=n-1;
            }
            while(c!=a)
            {
                if(n==0)
                {
                    break;
                }
                c=c+1;
                n=n-1;
            }
            while(n!=0)
            {

                a=a+1;
                n=n-1;
                if(n==0)
                {
                    break;
                }
                b=b+1;
                n=n-1;
                 if(n==0)
                {
                    break;
                }
                c=c+1;
                n=n-1;
                 if(n==0)
                {
                    break;
                }
            }
        }
         if(a==b && a==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }


}
