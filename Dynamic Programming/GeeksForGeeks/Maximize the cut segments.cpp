
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    int dp[10005];
    int solve(int n,int x,int y, int z){
        if(n==0) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int cut1=INT_MIN,cut2=INT_MIN,cut3=INT_MIN;
        
        if(n>=x){
            cut1 = solve(n-x,x,y,z);
        }
        if(n>=y){
            cut2 = solve(n-y,x,y,z);
        }
        if(n>=z){
            cut3 = solve(n-z,x,y,z);
        }
        
        return dp[n] = 1 + max(cut1,max(cut2,cut3));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        memset(dp,-1,sizeof(dp));
        int ans = solve(n,x,y,z);
        
        if(ans<0) return 0;
        return ans;
    }
};


int main() {
    
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  