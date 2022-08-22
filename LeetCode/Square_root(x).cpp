class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 0;
        if(x==1 or x==2 or x==3) return 1;
        while(low<=high){
           // cout<<"low: "<<low<<endl;
            //cout<<"high: "<<high<<endl;
          long long  int mid = low+(high-low)/2;
            //cout<<mid<<endl;
            
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid > x){
               
                high = mid-1;
                
                
            }
            else{
                ans = mid;
                low = mid+1;
                
            }
        }
        return ans;
    }
};
