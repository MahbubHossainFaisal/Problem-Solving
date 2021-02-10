#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll coin_change(int n, int *arr,int length,int **mem){
  if(n==0){
    return 1;
  }
  if(n<0){
    return 0;
  }

  if(length==0){
    return 0;
  }

  if(mem[n][length]>-1){
    return mem[n][length];
  }

  ll first = coin_change(n-arr[0],arr,length,mem);
  ll second = coin_change(n,arr+1,length-1,mem);
  mem[n][length]= first+second;

  return first+second;
}

long long int count(int S[],int m,int n){

  int **mem =new int*[n+1];
  for( int i=0;i<=n;i++){
    mem[i] = new int [m+1];
    for( int j=0;j<=m;j++){
      mem[i][j]=-1;
    }
  }
  return coin_change(n,S,m,mem);
}

int main()
{
   int n;
   cin>>n;

   int m;
   cin>>m;
   int *arr = new int[m];
   for(int i=0;i<m;i++){
    cin>>arr[i];
   }

   cout<<count(arr,m,n);

}