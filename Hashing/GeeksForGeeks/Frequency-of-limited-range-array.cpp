
/*
 Problem Link:   https://practice.geeksforgeeks.org/problems/frequency-of-array-elements/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int length;
        cin>>length;
        int a[length];
        for(int i=0;i<length;i++)
        {
            cin>>a[i];
        }

        int Max=0;
        for(int i=0;i<length;i++)
        {
            if(Max<a[i])
                Max=a[i];
        }

        int Hash[length+1]={0};

       for(int i=0;i<length;i++)
       {
           Hash[a[i]]++;
       }
       for(int i=1;i<=length;i++)
       {
           cout<<Hash[i]<<" ";
       }
       cout<<endl;
    }

}
