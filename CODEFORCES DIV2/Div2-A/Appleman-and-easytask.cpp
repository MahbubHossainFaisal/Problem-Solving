#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  char checkBoard[n][n];
  int count[n][n];

  for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
      cin>>checkBoard[i][j];
    }
  }
  for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
      count[i][j]=0;
    }
    
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(checkBoard[i-1][j] =='o' && i-1>=0){
        count[i][j]++;
      }
      if(checkBoard[i+1][j] =='o' && i+1<n){
        count[i][j]++;
      }
      if(checkBoard[i][j-1] =='o' && j-1>=0){
        count[i][j]++;
      }
      if(checkBoard[i][j+1] =='o' && j+1 < n){
        count[i][j]++;
      }
    }
  }
   
  

bool flag=true;
  
  for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
      if(count[i][j]%2 != 0){
        flag=false;
        break;
      }
    }
  }

  if(flag){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

 return 0;

}
