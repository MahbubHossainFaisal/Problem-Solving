#include<iostream>
using namespace std;

int main()
{
    int t;
    int a=2,b=3,c=4,n,i,j,l;
    while(t--)
    {
       for(i=2;i<=n;i++)
       {
           if(i==j || i==l)
       {
           i++;
       }
                if(i*j*l>n)
                   {

                     break;
                   }


           for(j=3;j<=n;j++)
           {

                if(j==i || j==l)
       {
           j++;
       }

            if(i*j*l>n)
                   {

                     break;
                   }

               for(l=4;l<=n;l++)
               {
                   if(l==i || l==j)
                   {
                       l++;
                   }

                   if(i*j*l>=n)
                   {

                     break;
                   }

               }
           }

           if((i*j*l)==n)
           {
               cout<<"YES"<<endl;
           }
       }


    }

}
