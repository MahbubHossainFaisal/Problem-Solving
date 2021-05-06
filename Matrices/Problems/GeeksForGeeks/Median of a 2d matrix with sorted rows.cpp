
#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int i =0;
        int j=c-1;
        int minElement =INT_MAX;
        int maxElement = INT_MIN;
        while(i!= r){
            if(matrix[i][0] < minElement){
                minElement = matrix[i][0];
            }
            i++;
        }
       // cout<<firstElement<<endl;
        i=0;
        while(i!=r){
            if(matrix[i][j] > maxElement){
                maxElement = matrix[i][j];
            }
            i++;
        }
        int desiredElement = (1+(r*c))/2;
        
        while(minElement < maxElement){
            int mid = minElement+(maxElement-minElement)/2;
            int cnt =0;
            for(int i=0;i<r;i++){
                cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(cnt < desiredElement) minElement = mid+1;
            else maxElement=mid;
        }
        
        
        return minElement;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  