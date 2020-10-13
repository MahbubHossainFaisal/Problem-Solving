/*
https://practice.geeksforgeeks.org/problems/count-the-paths/0/?category[]=DFS&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]DFSproblemTypefulldifficulty[]0page1sortBysubmissions

*/
#include <bits/stdc++.h>
using namespace std;

void DFS(vector <int> adj[],int s,int d,vector<bool>visited,int &cnt) //confused about the & before cnt
{
    if(s==d)
    {
        cnt++;
        return;
    }

    for(auto i: adj[s])
    {
        if(!visited[i])
        {
            visited[i]=true;
            DFS(adj,i,d,visited,cnt);
            visited[i]=false;
        }
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int V,E;
        cin>>V>>E;

        vector <int> adj[V];

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
        }

        int s,d;
        cin>>s>>d;
        int cnt=0;

        vector <bool> visited(V,false);

        visited[s]=true;

        DFS(adj,s,d,visited,cnt);
        cout<<cnt<<endl;

    }
}
