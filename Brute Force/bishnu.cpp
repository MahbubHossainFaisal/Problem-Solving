#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    long long n,i,q,bp,count,sum;

    cin>>n;
    long long *sp=new long long[n];

    for(i=0;i<n;i++)
    {
        cin>>sp[i];
    }
    sort(sp,sp+n);
    cin>>q;

    while(q--)
    {
        cin>>bp;

        count=0;
        sum=0;

        for(i=0;i<n;i++)
        {
            if(sp[i]<=bp)
            {
                count++;
                sum=sum+sp[i];
            }

        }
        cout<<count<<" "<<sum<<endl;

    }
    return 0;
}
