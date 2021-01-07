#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int x; // x<=10^9
        cin>>n>>x;

        long long int arr[n];
        long long int stlist[n][32]={0};
        long long int ans=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ans+=arr[i];
            int j=0;
            stlist[i][j]=arr[i];
            j++;
            while(arr[i]%x==0)
            {
               arr[i]=arr[i]/x;
               stlist[i][j]=arr[i];
               j++;
            }

        }
        int flag=0;

        for(int i=0;i<32;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(stlist[j][i+1]!=0)
                {
                    ans+=stlist[j][0];
                }
                else {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }

        cout<<ans<<endl;


    }
    return 0;
}
