/*
Problem Link: https://codeforces.com/contest/799/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
int price[1000000],Front[1000000],Back[1000000];

int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
        cin>>price[i];
    for(i=0;i<n;i++)
        cin>>Front[i];
     for(i=0;i<n;i++)
        cin>>Back[i];
    set<int> set1,set2,set3;

     for(i=0;i<n;i++)
    {
        if(Front[i]==1 || Back[i]==1)
        {
            set1.insert(price[i]);
        }
        if(Front[i]==2 || Back[i]==2)
        {
            set2.insert(price[i]);
        }
        if(Front[i]==3 || Back[i]==3)
        {
            set3.insert(price[i]);
        }

    }

    int m;
    cin>>m;

    for(i=0;i<m;i++)
    {
        int buyer;
        cin>>buyer;

        if(buyer==1)
        {
            if(!set1.empty())
            {
                cout<<*set1.begin()<<" ";

                set2.erase(*set1.begin());
                set3.erase(*set1.begin());
                set1.erase(*set1.begin());
            }
            else {
                cout<<-1<<" ";
            }
        }
        else if(buyer==2)
        {
            if(!set2.empty()){
                cout<<*set2.begin()<<" ";
                set1.erase(*set2.begin());
                set3.erase(*set2.begin());
                set2.erase(*set2.begin());
            }
            else {
                cout<<-1<<" ";
            }
        }

        else {
            if(!set3.empty()){
                cout<<*set3.begin()<<" ";
                set1.erase(*set3.begin());
                set2.erase(*set3.begin());
                set3.erase(*set3.begin());
            }
            else {
                cout<<-1<<" ";
            }
        }
    }

    return 0;

}

