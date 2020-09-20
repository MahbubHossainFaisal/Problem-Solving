#include<iostream>
using namespace std;

int main()
{
    int n,count,sum;
    count=0;
    sum=0;


    cin>>n;
     int *x=new int[n];
      int *y=new int[n];
       int *z=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }

    for(int i=0;i<n;i++)
    {
        if(x[i]==1)
        {
            count++;
        }
        if(y[i]==1)
        {
            count++;
        }
        if(z[i]==1)
        {
            count++;
        }

        if(count>=2)
        {
            sum++;
        }
        count=0;
    }

    cout<<sum;


}
