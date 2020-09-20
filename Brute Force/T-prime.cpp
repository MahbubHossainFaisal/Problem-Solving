#include<iostream>
using namespace std;

int main()
{
    long long n;
    int count;
    cin>>n;
    long long *a=new long long[n];

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=0;i<n;i++)
    {    count=0;

        for(long long j=1;j<=a[i];j++)
        {


            if(a[i]%j==0)
            {
                count++;
            }

        }

        if(count==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
