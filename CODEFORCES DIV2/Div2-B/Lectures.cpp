#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>> n>> m;

    map <string,string> mp;

    for(int i=1; i<=m; i++){
        string x,y ;
        cin>>x>>y;

        if(x.size() > y.size()){
            mp[x] = y;
        }
        else{
            mp[x]=x;
        }
    }

    for(int i=1; i<=n; i++){
        string x;
        cin>>x;
        cout<<mp[x]<<" ";
    }

    return 0;

}
