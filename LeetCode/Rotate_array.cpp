class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k= k% nums.size();
        int range = nums.size()-k;
        reverse(nums.begin(),nums.begin()+range);
        
        
        reverse(nums.begin()+range,nums.end());
        
        
        reverse(nums.begin(),nums.end());
    }
};