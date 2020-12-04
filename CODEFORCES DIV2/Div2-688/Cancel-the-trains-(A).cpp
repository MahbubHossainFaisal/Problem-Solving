
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;

        cin>>n>>m;
        map <int,int> mp;
        int *a = new int[n];
        int *b = new int[m];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
         for(int i=0;i<m;i++)
        {
            cin>>b[i];
             mp[b[i]]++;
        }

        int cnt=0;
        for(auto i: mp)
        {
            if(i.second>1){
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}
