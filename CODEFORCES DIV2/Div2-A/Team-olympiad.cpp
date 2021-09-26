#include <bits/stdc++.h>
using namespace std;



int main()
{
 int n;
 cin>>n;
 int ability[n+1];

 for(int i=1; i<=n; i++){
   cin>> ability[i];
 }

 int count1 = 0;
 int count2 = 0;
 int count3 = 0;
 for(int i=1; i<=n; i++){
   if(ability[i]==1){
    count1++;
   }
   if(ability[i]==2){
      count2++;
   }
   if(ability[i]==3){
      count3++;
   }
 }

 int minimum = min(count1,min(count2,count3));
 cout<<minimum<<endl;
 int count = 0;
 for(int i=1; i<=minimum; i++){
  for(int j=1; j<=n; j++){
    if(ability[j] == 1){
      cout<<j<<" ";
      ability[j]=-1;
      break;
    }
  }
  for(int j=1; j<=n; j++){
    if(ability[j] == 2){
      cout<<j<<" ";
      ability[j]=-1;
      break;
    }
  }
  for(int j=1; j<=n; j++){
    if(ability[j] == 3){
      cout<<j<<" ";
      ability[j]=-1;
      break;
    }
  }
  cout<<endl;
 }
 return 0;

}