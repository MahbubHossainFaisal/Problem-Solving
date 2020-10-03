/*
Problem Link: https://codeforces.com/contest/799/problem/B

*/




#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int price[n];
    int Front[n];
    int Back[n];

    map <int,pair <int,int>> mp;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>price[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>Front[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>Back[i];
    }

    for(i=0;i<n;i++)
    {
        int x=Front[i];
        int y=Back[i];
        int z=price[i];
        mp.insert(make_pair(z,make_pair(x,y)));
    }

    /*
    for(auto &i: mp)
    {
        cout<<"Shirt price: "<<i.first<<endl;
        cout<<"Front color: "<<i.second.first<<endl;
        cout<<"Back color: "<<i.second.second<<endl;
    }
    */

    int m;
    cin>>m;
    int buyer[m];

    for(i=0;i<m;i++)
    {
        cin>>buyer[i];

    }

    for(i=0;i<m;i++)
    {   int cnt=0;
        int buy=buyer[i];
        int key=-1;
        for(auto &i:mp)
        {
            if(buy==i.second.first || buy==i.second.second)
            {
                cout<<i.first<<" ";
                cnt=1;
                key=i.first;
                break;
            }
        }
        mp.erase(key);


        if(cnt==0)
        {
            cout<<-1<<" ";
        }

    }



}
