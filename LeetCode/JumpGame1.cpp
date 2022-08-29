class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        int goodJump = n;
         int i;
        for(i=n-1; i>=0; i--){
           
            if(i+nums[i] >= goodJump){
                goodJump = i;
            }
           
        }
       
        if(goodJump==0) return true;
        else return false;
    }
};
