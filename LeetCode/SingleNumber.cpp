class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // The most optimize solution of this solution is using XOR 
        // A XOR B = 1 (Value of A,B= 1,2,3,4....)
        // A XOR A = 0
        
        // 1 XOR 2 XOR 1 XOR 2 XOR 1 = 1 XOR 1 XOR 1 = 1
        
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
