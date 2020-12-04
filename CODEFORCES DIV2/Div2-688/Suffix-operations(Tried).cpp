#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int *a = new int[n];

        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        int check1,check2;
        for(int i=0;i<n;i++)
        {
            int Max = INT_MIN;
            int sec_Max=INT_MIN;
            if(abs(a[i])>Max){
                Max=a[i];
                check1=i;
            }
            if(abs(a[i])<Max && abs(a[i])>sec_Max){
                sec_Max=a[i];
                check2=i;
            }
        }

    a[check1]=a[check2];
       int j;
       int cnt=0;
       for(int i=1;i<n;i++)
       {
           if(a[i]<a[i-1]){
            while(a[i]!=a[i-1])
            {
                j=i;
                a[j++]++;
                if(j==n){
                    j=i;
                }
                if(a[i]==a[i-1]) cnt++;
            }
           }
            if(a[i]>a[i-1]){

             j=i;
                a[j++]--;
                if(j==n){
                    j=i;
                }
           }
           if(a[i]==a[i-1]) continue;
       }



    }
}
