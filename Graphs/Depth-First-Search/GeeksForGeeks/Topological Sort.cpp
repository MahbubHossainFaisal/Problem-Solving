
#include <bits/stdc++.h>
using namespace std;



class Solution
{
	public:

	void dfs(vector<int> adj[],int vis[],stack<int>& st, int n, int sv){
	    vis[sv] = 1;
	    
	    for(auto node: adj[sv]){
	        if(!vis[node]){
	            dfs(adj,vis,st,n,node);
	        }
	    }
	    st.push(sv);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    int vis[V] = {0};
	    stack<int> st;
	    vector<int> res;
	    
	    
	   for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(adj,vis,st,V,i);
	        }
	   }
	   while(!st.empty()){
	       int ele = st.top();
	       st.pop();
	       res.push_back(ele);
	   }
	   
	   return res;
	}
};


int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  