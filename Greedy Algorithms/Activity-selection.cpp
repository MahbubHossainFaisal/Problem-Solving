
#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

void maxMeetings(int start[],int end[],int n)
{
    vector <pair<int,int>> v;
    map<pair<int, int>, int> store;
    for(int i = 0 ; i<n ; i++)
    {
        v.push_back(make_pair(start[i],end[i]));
        store[{start[i],end[i]}] = i;
    }
    cout<<"Map has become: "<<endl;
    for(int i =0; i<n;i++)
    {
        cout<<store[{v[i].first,v[i].second}]<<endl;

    }

    sort(v.begin(),v.end(),compare);
    cout<<"After sorting vector is: "<<endl;

    for(int i =0; i<n;i++)
    {
        cout<<v[i].first<<"---->"<<v[i].second<<endl;

    }

    cout<<store[{v[0].first,v[0].second}]+1<<" ";
    int  j=1;
   for(int i=1;i<n;i++)
   {


       if(v[i].first>v[j-1].second)
       {
           cout<<store[{v[i].first,v[i].second}]+1<<" ";
           j++;
       }


   }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int start[n] = {75250,50074,43659,8931,11273,27545,50879,77924};
        int finish[n]={112960,114515,81825,93424,54316,35533,73383,160252};
        //for(int i=0;i<n;i++) cin >> start[i] ;

        //for(int i=0;i<n;i++) cin >> finish[i] ;

        maxMeetings(start,finish,n);
        cout<<endl;

    }
    return 0;
}
