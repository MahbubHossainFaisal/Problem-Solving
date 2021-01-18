
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int cows,ll positions[],int n,ll distance)
{
    int cnt=1;
    ll last_pos = positions[0];

    for(int i=0;i<n;i++)
    {
        if(positions[i]-last_pos >= distance)
        {
            cnt++;
            last_pos = positions[i];
        }
        if(cnt == cows){
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;

        cin>>n>>c;

        ll positions[n];

        for(int i=0;i<n;i++)
        {
            cin>>positions[i];
        }
        sort(positions,positions+n);

        ll start =0;
        ll End =positions[n-1]-positions[0];

        ll ans=-1;

        while(start <= End)
        {
            ll mid = start + (End-start)/2;

            if(check(c,positions,n,mid))
            {
                ans = mid;
                start=mid+1;

            } else {
                End =mid-1;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
