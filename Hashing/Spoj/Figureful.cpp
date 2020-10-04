
/*

Problem link: https://www.spoj.com/problems/ACMCEG2B/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    map<pair<int,int>,string> mp;
    int i;
    for(i=1;i<=n;i++)
    {
        int x;
        int y;
        string s;
        cin>>x>>y;
        cin>>s;
        mp[{x,y}]=s;
    }

    int Find;
    cin>>Find;

    for(i=1;i<=Find;i++)
    {
        int x;
        int y;
        cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }
}
