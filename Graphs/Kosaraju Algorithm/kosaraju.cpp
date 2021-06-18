
#include<bits/stdc++.h>
using namespace std;




class Solution
{
	public:

	void doDFS(vector<int>adj[],vector<int>&vis,stack<int>&s,int sv){
	     vis[sv]=1;
	 
	    
	   
	    for(auto node: adj[sv]){
	       
	          if(vis[node] ==0)  {
	             
	              doDFS(adj,vis,s,node);
	          }
	       
	    }
	    s.push(sv);
	    
	}
	
	void DFS(vector<int>adj[],vector<int>&vis,int sv){
	     vis[sv]=1;
	 
	    
	   
	    for(auto node: adj[sv]){
	       
	          if(vis[node] ==0)  {
	             
	              DFS(adj,vis,node);
	          }
	       
	    }
	   
	    
	}
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int> vis(V,0);
	    stack<int>s;
	   for(int i=0;i<V;i++){
	        if(vis[i] ==0){
	            doDFS(adj,vis,s,i);
	        }
	    }
	    
	    //reinitialize visited array
	    for(int i=0;i<V;i++){
	        vis[i]=0;
	    }
	    
	    //inverse graph
	    vector<int> reverseAdj[V];
	    for(int v=0;v<V;v++){
	        for(int u : adj[v]){
	            reverseAdj[u].push_back(v);
	        }
	    }
	    //count variable for counting scc
	    int cnt=0;
	    while(!s.empty()){
	        int sv = s.top();
	        s.pop();
	       if(!vis[sv]){
	           cnt++;
	            DFS(reverseAdj,vis,sv);
	       }
	    }
	    
	    return cnt;
    }
};




int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}
