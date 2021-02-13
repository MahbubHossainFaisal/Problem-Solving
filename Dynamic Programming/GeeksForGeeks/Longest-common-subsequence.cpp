#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int calc(int x,int y,string s1,string s2,int **output){
  //base case
  if(s1.size() == 0 || s2.size() == 0){
    return 0;
  }

  if(output[x][y] > -1){
    return output[x][y];
  }

  if(s1[0] == s2[0]){
    output[x-1][y-1] = calc(x-1,y-1,s1.substr(1),s2.substr(1),output);
    output[x][y] = 1 + output[x-1][y-1];
  }
  else{
    output[x][y-1] = calc(x,y-1,s1,s2.substr(1),output);
    output[x-1][y] = calc(x-1,y,s1.substr(1),s2,output);
    output[x][y] = max(output[x][y-1],output[x-1][y]);
  }

  return output[x][y];
}

int lcs(int x,int y,string s1,string s2){
  
  int **output = new int* [x+1];

  for(int i=0;i<x+1;i++){
    output[i]= new int[y+1];

    for(int j=0;j<y+1;j++){
      output[i][j]=-1;
    }
  }
  return calc(x,y,s1,s2,output);

}


int main()
{
  int a,b;
  cin>>a>>b;

  string s1,s2;
  cin>>s1>>s2;

  cout<<lcs(a,b,s1,s2)<<endl;
  return 0;
}