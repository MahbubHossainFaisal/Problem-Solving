
/*

Problem link: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
vector <int> dfs(vector<int> g[], int N)
{

    // Your code here
      vector <bool> visited(N,false);
    vector <int> res;
    stack <int> s;
    int el=0;
    s.push(el);
    while(!s.empty())
    {
         el=s.top();

        s.pop();

        if(visited[el])
            {
                continue;
            }
        res.push_back(el);
        visited[el]=true;
        for(int i=g[el].size()-1;i>=0;i--)
        {
            if(!visited[g[el][i]])
            {
                s.push(g[el][i]);
            }

        }
    }
    return res;



}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;

        vector<int> g[N];
        bool vis[N];

        memset(vis, false, sizeof(vis));

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends
