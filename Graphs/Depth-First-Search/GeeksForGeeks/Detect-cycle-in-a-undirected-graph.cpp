/*
Problem Link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
*/



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/

bool cyclic(int s,vector<int> g[],int visited[],int p)
{
    visited[s]=1;

    for(int i=0; i<g[s].size();i++)
    {
        if(!visited[g[s][i]])
        {
            if(cyclic(g[s][i],g,visited,s))
                return true;
        }
        else if(visited[g[s][i]] && g[s][i]!=p)
                return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
   // Your code here
    int visited[V]={0};

   for(int i=0;i<V;i++)
   {
      if(!visited[i])
      {
        if(cyclic(i,g,visited,-1))
        return true;
      }
   }
   return false;
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;

        // array of vectors to represent graph
        vector<int> adj[V];

        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;

            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends
