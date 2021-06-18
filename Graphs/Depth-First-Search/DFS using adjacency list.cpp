
#include<bits/stdc++.h>
using namespace std;



class Solution 
{
    public:
	
	void doDFS(vector<int>adj[],vector<int>&vis,vector<int>&dfs,int sv){
	     vis[sv]=1;
	 
	    
	    dfs.push_back(sv);
	    for(auto node: adj[sv]){
	       
	          if(vis[node] ==0)  {
	             
	              doDFS(adj,vis,dfs,node);
	          }
	       
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> vis(V,0);
	    vector<int> dfs;
	   for(int i=0;i<V;i++){
	        if(vis[i] ==0){
	            doDFS(adj,vis,dfs,i);
	        }
	    }
	    
	    return dfs;
	}
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  