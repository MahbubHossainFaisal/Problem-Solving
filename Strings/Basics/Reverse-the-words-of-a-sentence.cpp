#include <bits/stdc++.h>
using namespace std;

void reverseArray(string &arr,int start,int end){
  
  while(start < end){
   
    int temp = arr[start];
    arr[start++] = arr[end];
    
    arr[end--] = temp;
    
  }
  
}





int main() {

  string arr;


  getline(cin,arr);

  int wstart = 0;

  for(int i=0; i<=arr.size(); i++){
    if(arr[i] == ' ' or i == arr.size()){
     // cout<<wstart<<" "<<i<<endl;
      reverseArray(arr,wstart,i-1);
      wstart = i+1;
    }
    
  }
  
  cout<<arr;

return 0;
}
