
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
       int minimum = *min_element(a,a+n);

        i=0;
        j=1;
        int Count=0;
       for(i=1;i<n;i++)
       {
           int value = a[i]-minimum;

           if(value > k){
            Count+=value-k;
           }
       }

        cout<<Count<<endl;

    }
}
