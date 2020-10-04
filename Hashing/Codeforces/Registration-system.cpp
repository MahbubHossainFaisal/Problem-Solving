
/*
Problem link: https://codeforces.com/contest/4/problem/C

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    vector <string> v;
    map <string,int> mp;
    map <string,bool> m1;
    map <string,int> m2;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        v.push_back(s);
        mp[s]++;
        m1[s]=false;
    }

    for(i=0;i<n;i++)
    {
        string name=v[i];
       // cout<<"V : "<<name<<endl;
        if(m1[name]==false)
        {
            cout<<"OK"<<endl;
            m1[name]=true;
            mp[name]--;

        }
       else if(m1[name]==true)
        {
            m2[name]++;
            if(mp[name]>=1)
            {
                cout<<name<<m2[name]<<endl;

            }


        }
    }
}
