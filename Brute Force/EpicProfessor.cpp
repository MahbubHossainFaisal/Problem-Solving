#include<iostream>
using namespace std;


int main()
{
    int w,n,Count=0,res,again=0;
    cin>>w;
    while(w--)
    {
        cin>>n;
        int *a=new int[n];

     for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(Count<a[i])
            {
                Count=a[i];
            }
        }

        res=100-Count;

        for(int i=0;i<n;i++)
        {
            a[i]=a[i]+res;

            if(a[i]>=50)
            {
                again++;
            }
        }

        cout<<again<<endl;
        again=0;Count=0;res=0;
    }

    }

