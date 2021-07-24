class Solution {
public:
    bool solve(vector<int>& nums,int n,int sum){
        bool matrix[n+1][sum+1];
        
        for(int i=0; i<=n; i++){
            matrix[i][0] = true;
        }
        
        for(int j=1; j<=sum; j++){
            matrix[0][j] = false;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                if(nums[i-1] <= j){
                    matrix[i][j] = matrix[i-1][j-nums[i-1]] or matrix[i-1][j];
                }
                else{
                    matrix[i][j] = matrix[i-1][j];
                }
            }
        }
        return matrix[n][sum];
    }
    bool canPartition(vector<int>& nums) {
       int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+= nums[i];
        }
        
        if(sum % 2 != 0){
            return false;
        }
        
            return solve(nums,nums.size(),sum/2);
        
    }
};