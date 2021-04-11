class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int sz = nums.size();
        
        for(int i=sz-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                index = i;
                break;
            }
            
        }
        
        if(index == -1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int temp = index;
            for(int i=index+1; i<sz; i++){
                if(nums[i] > nums[index-1] and nums[i] <= nums[temp]){
                    temp = i;
                }
            }
            swap(nums[index-1],nums[temp]);
            reverse(nums.begin()+index,nums.end());
        }
    }
};