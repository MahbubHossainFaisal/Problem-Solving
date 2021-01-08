
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int *a =new int[n];
       for(int i=0;i<n;i++)
       {
           a[i]=0;
       }
        int x=9;
        int s=0;

        int i=2;
       a[0]=9;
       a[1]=8;

       for(int j=2;j<n;j++)
       {
           a[j]=x;
           x++;
           if(x>9)
           {
               x=0;
           }
       }
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
