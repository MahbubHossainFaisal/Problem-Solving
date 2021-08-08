#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        string s2;
        for(int i=S.size()-1; i>=0 ; i--){
            s2.push_back(S[i]);
        }
        int n = S.size();
        int m = S.size();
        
        
        int matrix[n+1][m+1];
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 or j==0){
                    matrix[i][j] = 0;
                }
                else if(S[i-1] == s2[j-1]){
                    matrix[i][j] = 1 + matrix[i-1][j-1];
                }
                else{
                    matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
                }
            }
        }
        
        
        int lcs = matrix[n][m];
        
        int sz = S.size();
        
        return sz-lcs;
        
    } 
};


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  