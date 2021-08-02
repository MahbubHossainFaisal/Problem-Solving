
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    
    int lcs(int x, int y, string s1, string s2)
    {
        int matrix[x+1][y+1];
        
        for(int i=0; i<=x; i++){
            for(int j=0; j<=y; j++){
                if(i==0 || j==0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(s1[i-1] == s2[j-1]){
                    matrix[i][j] = 1+ matrix[i-1][j-1];
                }
                else{
                    matrix[i][j] =  max(matrix[i][j-1], matrix[i-1][j]);
                }
            }
        }
        
        return matrix[x][y];
    }
};


int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          
        string s1,s2;
        cin>>s1>>s2;        
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}