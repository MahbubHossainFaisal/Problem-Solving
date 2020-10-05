/*
Problem link: https://codeforces.com/contest/1277/problem/B

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v;
        for(int i=1;i<=n;i++)
        {
            int input;
            cin>>input;
            if(input%2==0){
            v.push_back(input);
            }
        }

        sort(v.begin(),v.end(),greater<int>());

        map <int,int> m;
        int ans=0;
        for(int i=0 ; i<v.size() ; i++){

            int key=v[i];

            while(key%2==0)
            {
                if(m[key]==0){

                   ans++;
                   m[key]=1;

                   }

                key=key/2;
            }
        }
        cout<<ans<<endl;
    }
}
