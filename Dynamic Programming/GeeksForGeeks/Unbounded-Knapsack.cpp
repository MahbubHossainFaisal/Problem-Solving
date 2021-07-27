
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        
        int matrix[N+1][W+1];
        for(int i=0; i<=N; i++){
            matrix[i][0] = 0;
        }
        for(int j=0; j<=W;j++){
            matrix[0][j]=0;
        }
        
        for(int i=1; i<=N; i++){
            for(int j=1; j<=W; j++){
                if(wt[i-1] <= j){
                    matrix[i][j] = max(val[i-1]+matrix[i][j-wt[i-1]], matrix[i-1][j]);
                }
                else{
                    matrix[i][j] = matrix[i-1][j];
                }
            }
        }
        
        return matrix[N][W];
        
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  