/*
Link: https://codeforces.com/contest/1471/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector <int> v;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%x==0){
                int res=v[i]/x;
                for(int j=1;j<=x;j++)
                {
                    v.push_back(res);
                }
            }
            else {
                break;
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;


    }
    return 0;
}


