
/*
problem link: https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N,M,X,i;
        cin>>N;
        cin>>M;
        cin>>X;
        int A[N];
        int B[M];

        for(i=0;i<N;i++)
        {
            cin>>A[i];

        }
        sort(A,A+N);
          for(i=0;i<M;i++)
        {
            cin>>B[i];
        }
          vector<int> Hash(100);
         for(i=0;i<M;i++)
        {
            int index=B[i];
            Hash[index]++;

        }


        vector<pair <int,int>> p;

        int result;
        for(static int j=0;j<N;j++)
        {
            result=X-A[i];
            if(Hash[result]!=0)
            {
               p.push_back(make_pair(A[i],result));
            }
        }

        for(i=0;i<p.size()-1;i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<","<<" ";
        }
        cout<<p[i].first<<" "<<p[i].second<<endl;

        if(p.size()==0)
            cout<<"-1"<<endl;



    }
}
