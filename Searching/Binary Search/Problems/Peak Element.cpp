class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        int mid;
        while(start<=end){
             mid = start+(end-start)/2;
            
            if(mid+1 < nums.size() && nums[mid+1] > nums[mid] ){
                start=mid+1;
            }
            else if(mid-1 >=0 && nums[mid-1] > nums[mid]){
                end=mid-1;
            }
            else {
                return mid;
            }
    }
        return 0;
    }
};