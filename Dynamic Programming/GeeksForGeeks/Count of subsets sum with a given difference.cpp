
#include<bits/stdc++.h> 
using namespace std; 

 

class Solution{   
public:
    int isSubsetSum(int N, int arr[], int sum){
        // code here 
        int matrix[N+1][sum+1];
        for(int i=0;i<=N;i++){
            matrix[i][0] = 1;
        }
        for(int i=1;i<=sum;i++){
            matrix[0][i]= 0;
        }
        
        for(int i=1;i<N+1; i++){
            for(int j=1; j<sum+1; j++){
               
                if(arr[i-1] <= j){
                    matrix[i][j] = matrix[i-1][j-arr[i-1]] + matrix[i-1][j];
                }
                else{
                    matrix[i][j] = matrix[i-1][j];
                }
            }
        }
        
        
        return matrix[N][sum];
    }

    int solve(int N, int arr[],int diff){
        int range=0;

        for(int i=0; i<N; i++){
            range+=arr[i];
        }

        int sum = (diff+range)/2;

       int res = isSubsetSum(N,arr,sum);
       return res;


    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,diff;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
       cin>>diff;
        
        Solution ob;
        cout << ob.solve(N, arr,diff) << endl;
    }
    return 0; 
} 
 