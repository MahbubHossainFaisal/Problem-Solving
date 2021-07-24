

#include<bits/stdc++.h> 
using namespace std; 

 

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        bool matrix[N+1][sum+1];
        for(int i=0;i<=N;i++){
            matrix[i][0] = true;
        }
        for(int i=1;i<=sum;i++){
            matrix[0][i]= false;
        }
        
        for(int i=1;i<N+1; i++){
            for(int j=1; j<sum+1; j++){
               
                if(arr[i-1] <= j){
                    matrix[i][j] = matrix[i-1][j-arr[i-1]] or matrix[i-1][j];
                }
                else{
                    matrix[i][j] = matrix[i-1][j];
                }
            }
        }
        
        
        return matrix[N][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
 