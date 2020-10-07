/*

Problem link: https://practice.geeksforgeeks.org/problems/relative-sorting/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=1&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]1page1sortBysubmissions

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int A1[n];
        int A2[m];
        map<int,int> mp;
        int i;
        for(i=0;i<n;i++)
        {
            cin>>A1[i];int x=A1[i];
            mp[x]++;
        }

        for(i=0;i<m;i++)
        {
            cin>>A2[i];
        }
        int j=0;

        while(j!=m)
        {
            int x=A2[j];
            if(mp[x]>0)
            {
                cout<<x<<" ";
                mp[x]--;
            }
            if(mp[x]==0)
                j++;
        }
        sort(A1,A1+n);
        j=0;
        while(j!=n)
        {
            int x=A1[j];
            if(mp[x]>0)
            {
                cout<<x<<" ";
                mp[x]--;
            }
            else {
                j++;
            }
        }
        cout<<endl;

    }
    return 0;
}
