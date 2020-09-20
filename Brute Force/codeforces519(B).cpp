#include<iostream>
using namespace std;

int main()
{
    int n,i,sum,sum1,sum2,x,count1,count2;
    sum=0;
    sum1=0;
    sum2=0;
   cin>>n;

    for( i=1;i<=n;i++)
    {
        cin>>x;
        sum=sum+x;
    }
    for(i=1;i<=n-1;i++)
    {
        cin>>x;
        sum1=sum1+x;
    }
    count1=(sum-sum1);
    cout<<count1<<endl;
    for(i=1;i<=n-2;i++)
    {   cin>>x;
        sum2=sum2+x;
    }
    count2=(sum1-sum2);
    cout<<count2<<endl;

    return 0;

}
