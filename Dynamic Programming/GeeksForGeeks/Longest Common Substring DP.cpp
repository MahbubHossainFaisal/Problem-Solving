
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int x=n;
        int y=m;
         int matrix[x+1][y+1];
         int res=0;
        
        for(int i=0; i<=x; i++){
            for(int j=0; j<=y; j++){
                if(i==0 || j==0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(S1[i-1] == S2[j-1]){
                    matrix[i][j] = 1+ matrix[i-1][j-1];
                    res=max(res,matrix[i][j]);
                }
                else{
                    matrix[i][j] = 0;
                }
            }
        }
        
        return res;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
  