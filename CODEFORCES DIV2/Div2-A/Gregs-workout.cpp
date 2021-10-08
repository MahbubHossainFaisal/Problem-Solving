#include <bits/stdc++.h>
using namespace std;




int main() {

  int n;
  cin>>n;

  int sum1=0,sum2=0,sum3=0;
  int x,y,z;
  int check=1;
  while(check<=n){
    if(check<=n){
      cin>>x;
      sum1+=x;
      check++;
    }
    if(check<=n){
      cin>>y;
      sum2+=y;
      check++;
    }
    if(check<=n){
      cin>>z;
      sum3+=z;
      check++;
    }

  }

  if(sum1 > sum2 && sum1 > sum3){
    cout<<"chest"<<endl;
  }
  else if(sum2 > sum1 && sum2 > sum3){
    cout<<"biceps"<<endl;
  }
  else{
    cout<<"back"<<endl;
  }

}
