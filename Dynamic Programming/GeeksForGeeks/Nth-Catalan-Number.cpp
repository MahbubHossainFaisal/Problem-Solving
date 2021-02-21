
#include <bits/stdc++.h>
using namespace std;

long long int nthCatalan(int n){

  long long int *arr = new unsigned long long int[n+1];
  memset(arr,0,sizeof(arr));

  arr[0]=1;
  arr[1]=1;
  long long int res=0;
  for(int i=2;i<=n;i++){
    int k=i-1;
    for(int j=0;j<i;j++){
      
      res=res+(arr[j]*arr[k--]);
    }
    arr[i]=res;
    res=0;
  }

  return arr[n];

}

int main()
{
 
  int n;
  cin>>n;

  cout<<nthCatalan(n);
}