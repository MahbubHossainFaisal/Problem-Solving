
#include<bits/stdc++.h>
using namespace std;


string printSCS(string s1, string s2){


    int n=s1.size();
    int m= s2.size();

    int matrix[n+1][m+1];
    int i,j;
    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
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


    string scs;
   while(i>0 or j>0){
    if(s1[i-1] == s2[j-1]){
        scs.push_back(s1[i-1]);
        i--;
        j--;
    }
    else{
        if(matrix[i-1][j] > matrix[i][j-1]){
            scs.push_back(s1[i-1]);
            i--;
        }
        else{
            scs.push_back(s2[j-1]);
            j--;
        }
    }
   }

   while(i>0){
    scs.push_back(s1[i-1]);
    i--;
   }
   while(j>0){
    scs.push_back(s2[j-1]);
    j--;
   }
   reverse(scs.begin(),scs.end());

   return scs;
 }


int main()
{
    string s1,s2;
    //cin>>s1>>s2;
    s1="Hello";
    s2="Geek";
   string res = printSCS(s1,s2);
   cout<<res<<endl;
   return 0;
}
