#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    long long n,l;
    cin>>n;
    cin>>l;
    float *a=new float[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    float y=0;
     float x=0;
    int j=1;

   x=a[0]-0;


    for(int i=0;i<n;i++)
    {  if(a[j]-a[i]>y)
    {
        y=a[j]-a[i];
    }
    j++;

    }



    if(x>(y/2))
    {
        cout<<x;
    }
   else
   {
       cout<<y/2;
   }

}
