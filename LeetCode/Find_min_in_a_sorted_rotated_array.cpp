class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
     int   n = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            int next = (mid+1)%n;
            int prev = (mid-1+n)%n;
           
            if(nums[mid] <= nums[next] and nums[mid] <= nums[prev]){
                return nums[mid];
            }
    else    if(nums[mid] >= nums[high]){
                low = mid+1;
            }
            else{
                
                high = mid-1;
            }
        }
        
        return -1;
    }
};
