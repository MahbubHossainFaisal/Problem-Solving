
#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
	bool detect(vector<int>adj[],int vis[],int anc[],int n,int sv){
	    vis[sv] = 1;
	    anc[sv]= 1;
	    
	    for(auto node: adj[sv]){
	        if(!vis[node]){
	            if(detect(adj,vis,anc,n,node)){
	                return true;
	            }
	        }
	        else if(anc[node]){
	            return true;
	        }
	    }
	    anc[sv]= 0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	int vis[V] = {0};
	   	int anc[V]={0};
	   	
	   	for(int i=0;i<V; i++){
	   	    if(detect(adj,vis,anc,V,i)){
	   	        return true;
	   	    }
	   	    
	   	}
	   	
	   	return false;
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
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

 