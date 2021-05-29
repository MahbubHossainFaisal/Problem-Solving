
#include <bits/stdc++.h>
using namespace std;



class Solution{
  public:
   
    int findFloor(vector<long long> v, long long n, long long x){
        long long start=0;
        long long end = n-1;
        long long res=-1;
        
        while(start<=end){
            long long mid = start+(end-start)/2;
            
            if(v[mid] == x){
                res=mid;
                return res;
            }
            else if(v[mid] < x){
                res=mid;
                start=mid+1;
            }
            else{
                end = mid-1;
            }
        }
       return res;
        
    }
};




int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
} 