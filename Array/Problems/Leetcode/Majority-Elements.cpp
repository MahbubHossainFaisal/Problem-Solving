class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int checker=0;
        
        for(int num : nums){
            if(count==0){
                checker = num;
            }
            if(num == checker){
                count++;
            }
            else count--;
        }
        return checker;
    }
};