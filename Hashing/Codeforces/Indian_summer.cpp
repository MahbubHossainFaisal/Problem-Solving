/*
problem link: https://codeforces.com/contest/44/problem/A

*/

//using set stl it can solve easily as set stores only unique values.so we will take a set of pairs of strings.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    set < pair<string,string>> t;
    while(n--)
    {
        string x,y;
        cin>>x>>y;
        t.insert(make_pair(x,y));
    }
    cout<<t.size();



}
