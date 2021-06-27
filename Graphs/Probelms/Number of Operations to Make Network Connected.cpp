class Solution {
public:
    
    void dfs(vector<int>graph[],vector<int>&vis, int sv){
        vis[sv] = 1;
        for(auto x: graph[sv]){
            if(!vis[x]){
                dfs(graph,vis,x);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> graph[n];
        
        int m = connections.size();
        if(m < n-1){
            return -1;
        }
        
        vector<int> vis(n,0);
        
        for(int i=0; i<m ; i++){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        
        int cnt=0;
        
        for(int i=0; i<n ; i++){
            if(!vis[i]){
                cnt++;
                dfs(graph,vis,i);
            }
        }
        
        return cnt-1;
    }
};