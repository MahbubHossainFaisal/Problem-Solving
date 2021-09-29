#include <bits/stdc++.h>
using namespace std;


int main()
{
  int r,c;
  cin>>r>>c;
  char arr[r][c];

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin>>arr[i][j];
    }
  }
  int i,j;
  int cnt=0;
  int row=0,col=0;
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      if(arr[i][j] == 'S'){
        row++;
        break;
      }
    }
   
  }
 

  for(i=0; i<c; i++){
    for(j=0; j<r; j++){
      if(arr[j][i] == 'S'){
        col++;
        break;
      }
    }
   
  }

  cout<<(r*c)-(row*col)<<endl;
  

 
}
