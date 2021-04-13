class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        int l = 0;
        int r = n-1;
        int cnt=0;
        if(arr[l] == arr[r]){
            int factorial = n-1;
            int res=1;
            for(int i=1;i<=factorial; i++){
                res= res*i;
            }
            return res;
        } 
        
        else {
            while(l < r){
                if(arr[l] + arr[r] < k) l++;
                if(arr[l]+ arr[r] > k) r--;
                if(arr[l]+arr[r]==k){
                    cnt++;
                    l++;
                }
            }
        }
        return cnt;
        
        
    }
};