class Solution {
public:
    int binarySearch(vector<int>& nums,int start,int end,int target){
        while(start<=end){
            int mid = start+ (end-start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] <= target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        int res=-1;
        
        while(start<=end){
            int mid= start+ (end-start)/2;
            int prev = (mid+n-1)%n;
            int next = (mid+1)%n;
            
            if(nums[prev] >= nums[mid] and nums[mid] <= nums[next]){
                res=mid;
                break;
            }
            else if(nums[mid] < nums[end]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        int ps1 = binarySearch(nums,0,res-1,target);
        int ps2 = binarySearch(nums,res,n-1,target);
        
        if(ps1== -1 && ps2==-1){
            return -1;
        }
        else if(ps1== -1 && ps2!=-1){
            return ps2;
        }
        else{
            return ps1;
        }
    }
};