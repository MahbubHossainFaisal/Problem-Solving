
#include <bits/stdc++.h>
using namespace std;

int calculate(int arr[],int i,int j){
  if(i>=j){
    return 0;
  }

  int minimum = INT_MAX;

  int k;
  for(k=i;k<=j-1;k++){
    int temp = calculate(arr,i,k) + calculate(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
    if(minimum > temp){
      minimum = temp;
    }
  }
  return minimum;
}
int matrixMultiplication(int N, int arr[])
    {
        return calculate(arr,1,N-1);
    }

int main()
{
 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<matrixMultiplication(n,arr);
}