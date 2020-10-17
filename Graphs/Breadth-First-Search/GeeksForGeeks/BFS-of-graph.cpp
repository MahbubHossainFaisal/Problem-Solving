/*

https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/
vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    vector<bool> visited(N,false);
    vector <int> res;

    list <int> q;
    int s=0;

    visited[s]=true;
    q.push_back(s);

    while(!q.empty())
    {
        int x=q.front();
        res.push_back(x);
       // cout<<s<<" ";
        q.pop_front();

        for(auto i=g[x].begin();i!=g[x].end();++i)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                q.push_back(*i);
            }

        }
    }
    return res;
}

