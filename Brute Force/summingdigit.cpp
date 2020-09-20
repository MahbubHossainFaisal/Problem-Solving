
#include<iostream>
using namespace std;

int main()
{
    int n,x,count,y,count1;
    count=0; count1=0;

    while(1)
    {cin>>n;
    if(n==0)
    {
        break;
    }
    else
 {

  x=n%10;
        count=count+x;

        if(n<10)
        {
            break;
        }
        n=n/10;



}
  if(count<10)
  {

  cout<<count<<endl;}
   while(count>=10)
   { count1=count/10;
     y=count%10;
     count1= count1+y;
     count=count1;

   }
   cout<<count1<<endl;}


}
