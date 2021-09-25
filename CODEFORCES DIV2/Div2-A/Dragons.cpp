#include <bits/stdc++.h>
using namespace std;



int main()
{
 int ks,nd;
 cin>>ks>>nd;

pair<int,int> a[nd];

 for(int i=0; i<nd; i++){
   cin>>a[i].first>>a[i].second;
 }
 sort(a,a+nd);

 
 int i;
 for( i=0; i<nd; i++){
   if(ks > a[i].first){
      ks+=a[i].second;
   }
   else{
      break;
   }
   
 }

 if(i==nd) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}