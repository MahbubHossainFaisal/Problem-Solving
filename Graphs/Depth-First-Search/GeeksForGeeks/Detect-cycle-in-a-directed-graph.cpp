/*
Problem link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

bool cyclic(int s,vector <int> adj[],int visited[],int Stack[])
{
    visited[s]=1;
    Stack[s]=1;

    for(int i=0;i<adj[s].size();i++ )
    {
        int j=adj[s][i];
      if(!visited[j] && cyclic(j,adj,visited,Stack))
        return true;
      else if(Stack[j])
        return true;
    }
    Stack[s]=0;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    // Your code here


   int visited[V]={0};
   int Stack[V]={0};

   for(int i=0;i<V;i++)
   {
       if(!visited[i])
       {
           if(cyclic(i,adj,visited,Stack))
            return true;
       }
   }
   return false;

}



// { Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int v, e;
	    cin >> v >> e;

	    vector<int> adj[v];

	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }

	    cout << isCyclic(v, adj) << endl;

	}

	return 0;
}  // } Driver Code Ends
