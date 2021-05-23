 int n=nums.size();   
    int pre=0;
    int next=0;
    int start=0;
    int end=n-1;
    
    if(n==1){
        return nums[0];
    }
 
    
    while(start<=end){
        int mid=start+(end-start)/2;
        pre=(mid+n-1)%n;
        next=(mid+1)%n;
        
       if(nums[pre] >= nums[mid] and nums[mid] <= nums[next]){
            return nums[mid];
        }
        else if(nums[mid] < nums[end]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    return -1;