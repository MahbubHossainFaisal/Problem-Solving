
/* Problem Link:
https://practice.geeksforgeeks.org/problems/k-anagrams-1/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    map <string,int> m;

    while(t--)
    {
        int n;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            sort(s.begin(),s.end());
            m[s]++;
        }

         vector <int> v;

        for(auto &i: m)

        {
           v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for(auto j: v)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        v.clear();
        m.clear();

    }

    return 0;
}
