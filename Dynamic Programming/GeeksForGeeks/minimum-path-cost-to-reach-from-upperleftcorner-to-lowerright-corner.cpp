#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int Count(int si,int sj,int ei,int ej,int **input,int **output ){
  if(si==ei && sj==ej ){
    return input[ei][ej];
  }
  if(si>ei || sj>ej){
    return INT_MAX;
  }
  if(output[si][sj]>-1){
    return output[si][sj];
  }
  int path1 = Count(si+1,sj,ei,ej,input,output);
  int path2 = Count(si+1,sj+1,ei,ej,input,output);
  int path3 = Count(si,sj+1,ei,ej,input,output);

  output[si][sj] = input[si][sj]+ min(path1,min(path2,path3));

  return input[si][sj]+ min(path1,min(path2,path3));
}


int maximumPath(int N, int **input)
  {
        // code here
     int **output = new int*[N+1];

     for(int i=0;i<N+1;i++){
      output[i] = new int[N+1];
      for(int j=0; j<N+1; j++)
        output[i][j]=-1;
      
     }
      return Count(0,0,N-1,N-1,input,output);
  }


int main()
{
   int n;
   cin>>n;

   int **input = new int*[n];

   for(int i=0;i<n;i++){
    input[i] = new int[n];

    for(int j=0;j<n;j++){

     cin>>input[i][j];

    }
   }


  

   cout<<maximumPath(n,input);
   

}