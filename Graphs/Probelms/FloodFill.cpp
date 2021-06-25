class Solution {
public:
    void Dfs(int i,int j,vector<vector<int>>&image, vector<vector<int>>&vis,int row,int col,int oldColor,int newColor){
        if(i<0 or i>=row or j<0 or j>=col) return;
        if(vis[i][j] or image[i][j]!=oldColor) return;
        vis[i][j] = 1;
        image[i][j]=newColor;
        Dfs(i+1,j,image,vis,row,col,oldColor,newColor);
        Dfs(i,j-1,image,vis,row,col,oldColor,newColor);
        Dfs(i,j+1,image,vis,row,col,oldColor,newColor);
        Dfs(i-1,j,image,vis,row,col,oldColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row = image.size();
        int col = image[0].size();
        
        vector<vector<int>> vis(row,vector<int>(col,0));
        int oldColor = image[sr][sc];
        
        Dfs(sr,sc,image,vis,row,col,oldColor,newColor);
        return image;
    }
};