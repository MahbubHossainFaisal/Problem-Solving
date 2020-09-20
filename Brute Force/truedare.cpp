
#include<iostream>
using namespace std;

int main()
{
    int T,i;
    int Tr,Dr,Ts,Ds,j,k,l,m;
     int a[100];
      int b[100];
       int c[100];
        int d[100];
    cin>>T;
    for(i=1;i<=T;i++)
    {   if(T<1 && T>100)
    {
        break;
    }


        cin>>Tr;
        for(int i=1;i<=Tr;i++)
        {
            cin>>a[j];
            cout<<" ";
        }
        cout<<endl;

        cin>>Dr;
         for(i=1;i<=Dr;i++)
        {
            cin>>b[j];
            cout<<" ";
        }
        cout<<endl;

         for(i=1;i<=Ts;i++)
        {
            cin>>c[j];
            cout<<" ";
        }
        cout<<endl;

         for(i=1;i<=Ds;i++)
        {
            cin>>d[j];
            cout<<" ";
        }
        cout<<endl;

        for(int i=1;i<=100;i++)
    {
        for(int k=1;k<=100;k++)
        {
            if(c[j]!=a[k])
            {
                cout<<"NO"<<endl;
            }
            if(d[j]!=b[k])
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"Yes"<<endl;
        }
    }
    }



}
