class Solution
{
    public:
    
    int countOccurence(int arr[], int n, int k) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int checker = n/k;
        int cnt=0;
        
        for(auto i: m){
            if(i.second > checker) cnt++;
        }
        
        return cnt;
    }
    
};