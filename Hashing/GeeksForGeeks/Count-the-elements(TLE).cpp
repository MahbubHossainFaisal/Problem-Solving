
/*
https://practice.geeksforgeeks.org/problems/count-the-elements/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions
*/

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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int q,Count=0;
        cin>>q;
        for(int i=1;i<=q;i++)
        {
            int x;
            cin>>x;

            for(int j=0;j<n;j++)
            {
                if(a[x]>b[j])
                    Count++;
            }
            cout<<Count<<endl;
            Count=0;

        }
    }
}
