/*

Problem link: https://codeforces.com/problemset/problem/500/A

*/


#include <bits/stdc++.h>
using namespace std;

#define Max 100010
vector <int> graph[Max];
vector <bool> visited(Max,false);

void DFS(int source)
{
    visited[source]=true;

    for(int i=0;i<graph[source].size(); ++i)
    {
        int s=graph[source][i];
        if(!visited[s])
        {
            DFS(s);
        }
    }
}

int main()
{
    int n,t;
    cin>>n>>t;

    for(int i=1;i<n;i++)
    {
        int j;
        cin>>j;

        graph[i].push_back(i+j);
    }

    DFS(1);

    if(visited[t])
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }



}
