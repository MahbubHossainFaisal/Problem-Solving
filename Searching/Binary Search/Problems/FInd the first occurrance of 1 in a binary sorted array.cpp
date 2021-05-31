#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int start =0;
        int end= n-1;
        int mid=-1;
        while(start<=end){
             mid = (start+end)/2;
            if(a[mid] == 1){
                if(a[mid-1] == 0){
                    return mid;
                }
                else{
                    end=mid-1;
                }
            }
        	else if(a[mid] < 1){
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }


        if(start > end){
            return -1;
        }
        
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  