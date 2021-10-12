#include <bits/stdc++.h>
using namespace std;




int main() {

  int n;
  cin>>n;

  char arr[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>arr[i][j];
    }
  }

  int j=0; int k=n-1;
  bool flag = true;

  for(int i=0; i<n; i++){
    if(arr[i][j] == arr[i][k]){
      j++;
      k--;
    }
    else{
      flag = false;
      break;
    }
  }

  if(flag and arr[0][0]!='x'){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }

}
