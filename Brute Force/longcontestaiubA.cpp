#include<iostream>
using namespace std;

int main()
{
    int T,n,u,v,i,x=0,y=0,count1=0,count2=0;


    cin>>T;
    while(T--)
    {
        cin>>n;
        int a[n];
        int b[n];
        a[0]=0;
        b[0]=0;

        for(i=0;i<n;i++)
        {
            cin>>u;
            cin>>v;

             a[i]=u;
            b[i]=v;

            if(a[0]==a[i]|| a[0]==b[i])
            {
                count1++;

            }
            if(b[0]==a[i] ||b[0]==b[i])
            {
                count2++;
            }




        }

         for(i=1;i<=T;i++)
         {
             if(count1>count2)
             {
                 cout<<"case "<<i<<":"<<count1<<endl;
             }
            if(count2>count1)
             {
                  cout<<"case "<<i<<":"<<count2<<endl;
             }
         }

    }
}
