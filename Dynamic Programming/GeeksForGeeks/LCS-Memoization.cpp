
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;




class Solution
{
    public:
    int matrix[1001][1001];
    
    int solve(int n,int m,string s1,string s2){
        if(n==0 or m==0){
            return 0;
        }
        if(matrix[n][m] != -1){
            return matrix[n][m];
        }
        
        if(s1[n-1] == s2[m-1]){
           return matrix[n][m] = 1 + solve(n-1,m-1,s1,s2);
        }
        else{
          return  matrix[n][m] = max(solve(n,m-1,s1,s2),solve(n-1,m,s1,s2));
        }
        
    }
    
    int lcs(int x, int y, string s1, string s2)
    {
        memset(matrix,-1,sizeof(matrix));
        int res = solve(x,y,s1,s2);
        return res;
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends