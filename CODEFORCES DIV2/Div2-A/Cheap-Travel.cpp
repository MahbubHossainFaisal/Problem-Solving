#include <bits/stdc++.h>
using namespace std;




int main()
{
   int n,m,a,b;

   cin>>n>>m>>a>>b;

   int counter=0;
   int sum1 =a*n;
   
   int sum2 =0;
   while(counter < n){
      if(counter+m <= n){
         sum2+=b;
         counter+=m;
      }
      else{
         sum2+=a;
         counter+=1;
      }
   }

   int sum3 =0;
   int counter2 = 0;
   while(true){

      if(counter2 < n){
         sum3+=b;
         counter2+=m;
      }
      else if(counter2 >= n) {
         
         break;
      }
   }
  // cout<<"sum1 "<<sum1<<endl;
  // cout<<"sum2 "<<sum2<<endl;
  // cout<<"sum3 "<<sum3<<endl;

   int minimum = min(min(sum1,sum2),sum3);
   cout<<minimum;
return 0;

}