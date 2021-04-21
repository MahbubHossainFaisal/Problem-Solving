class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long mx=arr[0];
	    long long mn=arr[0];
	    long long product = arr[0];
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(mx,mn);
	        }
	        
	        mx = max((long long) arr[i],arr[i]*mx);
	        mn = min((long long) arr[i],arr[i]*mn);
	        
	        if(mx> product){
	            product = mx;
	        }
	        
	    }
	    return product;
	}
};
