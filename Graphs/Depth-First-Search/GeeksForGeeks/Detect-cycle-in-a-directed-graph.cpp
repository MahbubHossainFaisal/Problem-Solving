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
bool isCyclic(int V, vector<int> adj[])
{
    // Your code here

    vector <bool> visited(V,false);
    vector <bool> track(V,0);
    stack <int> st;

    st.push(0);
    track[0]=true;
    while(!st.empty())
    {
        int el=st.top();


        if(visited[el])
        {
            if(track[el])
            {
                return 1;
               break;
            }
            else {
                continue;
            }
        }
         st.pop();
         track[el]=false;
        visited[el]=true;

        for(auto i=adj[el].begin(); i!=adj[el].end();++i)
        {
            if(!visited[*i])
            {
                st.push(*i);
                track[*i]=1;
            }
        }

    }
    if(st.empty())
    {
      return 0;
    }
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
