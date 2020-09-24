/*
problem link:
https://practice.geeksforgeeks.org/problems/sum-of-fai-aj-over-all-pairs-in-an-array-of-n-integers/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=-1&difficulty[]=0&page=1&sortBy=accuracy&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]-1difficulty[]0page1sortByaccuracy
*/

#include<bits/stdc++.h>
using namespace std;

void Sum(int a[],int n)
{
    int Count=0;
    int i,j;

    for(i=0;i<n;i++)
    {
        int x=a[i];
        for(j=i+1;j<n;j++)
        {
            int res=a[j]-a[i];
            if(res>1 || -res>1){
                 Count+=res;
                //cout<<"Count becomes: "<<Count<<endl;
            }
            else{

               Count+=0;

            }
        }
    }

    cout<<Count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Sum(a,n);

    }
}
