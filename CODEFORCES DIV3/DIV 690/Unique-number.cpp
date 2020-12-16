/*
link: https://codeforces.com/contest/1462/problem/C
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
    int store[] = {9,8,7,6,5,4,3,2,1};
        int i=0;
    int cal=x;
    vector <int> v;
    if(cal>=0 && cal <=9)
        {
            v.push_back(cal);
        }
    else if(cal>=10 && cal <=45){
        while(cal!=0)
        {
            if(cal < store[i]){
                v.push_back(cal);
                break;
            }
            cal= cal-store[i];
            v.push_back(store[i]);
            i++;


        }
    }
    else {
        v.push_back(-1);
    }
    reverse(v.begin(),v.end());

    for(auto i: v)
    {
        cout<<i;
    }
    cout<<endl;

    }
}
