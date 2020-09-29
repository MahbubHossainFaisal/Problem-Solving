
/*
Problem link:

https://practice.geeksforgeeks.org/problems/largest-fibonacci-subsequence/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1
*/

#include<bits/stdc++.h>
using namespace std;


int fib(int n)
{
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    int i=1;
    while(v[i]<=n)
    {
        if(v[i]==n)
        {
            return 1;
        }
        i++;
        int add=v[i-1]+v[i-2];
        v.push_back(add);
        }

    return 0;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int i;
        int a[n];
       // bool x=false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }


        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                cout<<a[i]<<" ";

            int  x=fib(a[i]);
            if(x==1)
                cout<<a[i]<<" ";
        }

        cout<<endl;

    }
}
