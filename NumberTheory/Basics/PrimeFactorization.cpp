#include<bits/stdc++.h>
using namespace std;

void Factorize(int n)
{
    int *a=new int[100];
    for(int j=0;j<100;j++)
    {
        a[j]=0;
    }
    int i;
while(n>0)
{


    for(i=2;i<=sqrt(n);i++)
    { int cnt=0;
        if((n%i)==0)
        {
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
        }
        if(cnt!=0)
            a[i-1]=a[i-1]+cnt;
        //cout<<i<<" "<<"("<<cnt<<")"<<" "<<"*"<<" ";


    }


    if(n!=1)
    {
       a[n-1]=a[n-1]+1;
    }

}


    for(i=0;i<100;i++)
    {
        if(a[i]!=0)
        {
            cout<<i+1<<" "<<"("<<a[i]<<")"<<" "<<"*"<<" ";
        }
    }
}
int main()
{int input;
cin>>input;
    while(input--)
   {
       int n;
    cin>>n;
    //cout<<"The factors of "<<n<<" is : "<<endl;
    Factorize(n);
   }
}
