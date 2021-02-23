
#include <bits/stdc++.h>
using namespace std;

static int matrix[105][105];

int distance(int i,int j,string s,string t){

  if(i== s.size()) return t.size()-j;
  if(j== t.size()) return s.size()-i;

  if(matrix[i][j]!=-1){
    return matrix[i][j];
  }
  if(s[i] == t[j]){
    return distance(i+1,j+1,s,t);
  }
  else{
    int insert =1+ distance(i,j+1,s,t);
    int dlt = 1+ distance(i+1,j,s,t);
    int replace = 1+ distance(i+1,j+1,s,t);
    return matrix[i][j] = min(insert,min(dlt,replace));
  }

}

int editDistance(string s, string t)
{
        // Code here
    memset(matrix,-1,sizeof(matrix));
    return distance(0,0,s,t);

}
int main()
{
 
 
  string s,t;
  cin>>s>>t;
  cout<<editDistance(s,t);
}