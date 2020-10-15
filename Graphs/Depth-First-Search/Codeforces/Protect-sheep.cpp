
/*
   problem link: https://codeforces.com/problemset/problem/948/A
*/

#include <bits/stdc++.h>
using namespace std;

char s[501][501];

int main()
{
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(s[i][j]=='.')
            {
                s[i][j]='D';
            }
            if(s[i][j]=='S')
            {
                if(s[i-1][j]=='W' || s[i+1][j]=='W' || s[i][j-1]=='W' || s[i][j+1]=='W')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"YES"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<s[i]<<endl;
    }

}
