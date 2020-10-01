/*

Problem Link: https://codeforces.com/contest/903/problem/C

*/


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    map <int,int> m;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }



    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt=max(cnt,m[a[i]]);
    }
    cout<<cnt<<endl;

    return 0;


}
