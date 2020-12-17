/*

Link: https://codeforces.com/contest/1462/problem/B
*/


#include<bits/stdc++.h>
using namespace std;

void subsequence(int n)
{
    string s;
    cin>>s;

    for(int i=0;i<=4;i++)
    {
        string t1 = s.substr(0,i);
        string t2 = s.substr(n-4+i);

        string res = t1+t2;

        if(res=="2020"){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        subsequence(n);
    }
    return 0;
}
