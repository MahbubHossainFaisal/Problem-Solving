
#include<bits/stdc++.h>
using namespace std;


 int LPS(string s1){

    string s2;

    for(int i=s1.size()-1; i>=0; i--){
        s2.push_back(s1[i]);
    }

    int n=s1.size();
    int m= s2.size();

    int matrix[n+1][m+1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0 or j==0){
                matrix[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1]){
                matrix[i][j] = 1 + matrix[i-1][j-1];
            }
            else{
                matrix[i][j] = max(matrix[i-1][j],matrix[i][j-1]);
            }
        }
    }


   return matrix[n][m];
 }


int main()
{
    string s1;
    cin>>s1;
   int res = LPS(s1);
   cout<<res<<endl;
   return 0;
}
