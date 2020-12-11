
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        char arr[n][m];
        for(int i = 0 ; i<n; i++)
        {
            for(int j=0; j<m ; j++)
            {
                cin>>arr[i][j];
            }
        }

        int i=0,j=0;
        int cnt=0;
        while(1)
        {
            if(arr[i][j]=='*')
            {
                cnt++;
                i=i+1;
                j=j-1;
                int k = j+1;
                if(j<0) break;
                for(j ; j<=k ; j++)
                {
                    if(j=='*')
                        continue;
                    else
                        break;
                }
                if(j==k)
                    cnt++;
                i
            }
        }


    }
}
