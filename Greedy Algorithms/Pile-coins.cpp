
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
        sort(a,a+n);

        i=0;
        j=1;
        int Count=0;
        while(i!=n-1)
        {
            int value = a[j]-a[i];
           // cout<<"Value is: "<<value<<endl;
            if(value>k){
                int res=value-k;
                a[j]=res;
                Count++;
            }
            if(value<= k) {
                j++;
            }

            if(j==n)
            {
                 i++;
                j=i+1;

            }
        }

        cout<<Count<<endl;

    }
}
