class Solution {
public:
    void dfs(int i,int j, vector<vector<char>> grid, vector<vector<bool>>&vis,int row,int col){
        if(i<0 or j<0 or i>=row or j>=col || grid[i][j] == '0') return;
        
        
        if(!vis[i][j]){
            vis[i][j] = true;
            dfs(i+1,j,grid,vis,row,col);
            dfs(i-1,j,grid,vis,row,col);
            dfs(i,j+1,grid,vis,row,col);
            dfs(i,j-1,grid,vis,row,col);
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

       vector<vector<bool>> vis(row,vector<bool>(col,false));
        
        int cnt=0;
        
       for(int i=0; i<row;i++){
           for(int j=0;j<col;j++){
               if(!vis[i][j] && grid[i][j]=='1'){
                   cnt++;
                   dfs(i,j,grid,vis,row,col);
               }
           }
           
       }
        return cnt;
    }
};


