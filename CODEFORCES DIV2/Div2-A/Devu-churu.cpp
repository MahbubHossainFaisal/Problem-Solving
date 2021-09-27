#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n,d;
  cin>>n>>d;

  int t[n];
  for(int i=0; i<n; i++){
    cin>>t[i];
  }

  int sum=0;
  int churu=0;
  int i;
  for(i=0; i<n; i++){
    if(sum < d){
      sum+=t[i];
      if(sum>d){
        i--;
        break;
      }
      sum+=10;
      churu+=2;
    }
    else{
      break;
    }
  }
 
  if(i != n){
    cout<<-1<<endl;
    return 0;
  }

  
   if(sum < d){
    while(true){
      sum+=5;
      churu++;
      if(sum>=d) break;
    }
  }
  if(sum > d) {

    while(sum > d){
      sum-=5;
      churu--;
    }

  }

  
  cout<<churu<<endl;
 return 0;

}