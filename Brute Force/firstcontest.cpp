#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n,x,y,sum,z;
    sum=0;
    cin>>n>>x;
    int count=0;

    for(int i=1;i<=n;i++)
    {
        cin>>y;
        sum=sum+y;
    }

   if(abs(sum)<=x)
   {
       cout<<"1"<<endl;
   }

   if(abs(sum)>=x)
   {
       while(sum!=0)
       {   z=sum/x;
           sum=sum%x;

           count=count+z;
       }
       cout<<count+1<<endl;
   }

}
