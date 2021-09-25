#include <bits/stdc++.h>
using namespace std;



int main()
{
 int n,m;
 cin>>n>>m;

 int counter =0;
 int checker=0;
 while(checker!=n){
   if(n < m) {
      cout<<-1;
      break;
   }
   if(checker < n ){
      checker+=2;
      counter++;
   }
   if(checker == n and counter%m == 0){
      cout<<counter;
      break;
   }
   if(checker == n and counter%m != 0){
       while(counter%m!=0){
         ++counter;
      }
      cout<<counter;
      break;
   }
   if(checker > n ){
   
      //counter--;
      while(counter%m!=0){
         ++counter;
      }
      cout<<counter;
      break;
   }
 }

}