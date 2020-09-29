/*
Problem link:

https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions


*/
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
        vector <int> a;
        set <int> s;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for(auto i: s)
        {
           a.push_back(i);
        }
        /*
        cout<<"Vector: "<<endl;
        for(auto i: a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        */

        int k;
        cin>>k;

         int i=0,j=0,Count=0;
        while(1)
        {
            if(a.size()==1)
            {
                Count++;
                break;
            }
            if((a[j]-a[i])!=k)
            j++;
            else if((a[j]-a[i])==k)
                {
                    Count++;
                    j++;
                }
                if(j>a.size()-1)
                {
                    i++;
                    if(i==a.size()-1)
                        break;
                    j=i+1;
                }


        }
        cout<<Count<<endl;

    }
    return 0;
}
