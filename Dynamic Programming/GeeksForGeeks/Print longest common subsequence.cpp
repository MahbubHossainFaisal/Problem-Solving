
#include<bits/stdc++.h>
using namespace std;

 string printLCS(string s1,string s2, int n,int m){

    int matrix[n+1][m+1];
    int i=0,j=0;
    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            if(i==0 || j==0){
                matrix[i][j] =0;
            }
            else if(s1[i-1] == s2[j-1]){
                matrix[i][j] = 1 + matrix[i-1][j-1];
            }
            else{
                matrix[i][j] = max(matrix[i][j-1],matrix[i-1][j]);
            }
        }
    }

    string LCS;

    while(i>0 or j>0){
        if(s1[i-1] == s2[j-1]){
            LCS.push_back(s1[i-1]);
            i--;
            j--;
        }
        else{
            if(matrix[i][j-1] > matrix[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }

    }
    reverse(LCS.begin(),LCS.end());
    return LCS;
 }


int main()
{
    string s1,s2;
    cin>>s1>>s2;

    string ans = printLCS(s1,s2,s1.size(),s2.size());

    cout<<ans<<endl;

    return 0;
}
