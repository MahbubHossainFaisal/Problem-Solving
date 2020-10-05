/*

https://practice.geeksforgeeks.org/problems/key-pair5616/1/?category[]=Hash&problemStatus=unsolved&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolveddifficulty[]0page1sortBysubmissions
*/

class Solution{
public:
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {

	   int i=0,j=1;
	   while(i!=n-1)
	   {
	       if((arr[i]+arr[j])!=x){
	           j++;
	       }
	        if((arr[i]+arr[j])==x){
	            return true;
	            break;
	        }
	        if(j==n){
	            i++;
	            j=i+1;
	        }

	   }
	   if(i==n-1)
	   return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } D
