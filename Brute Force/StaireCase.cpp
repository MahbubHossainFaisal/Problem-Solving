#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
  char x= '#';
  int k=1;
  for(int i=5;i>=1;i--){
    for(int j=1 ; j<=5; j++){
        if(j>=i){
          cout<<x;
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
    
  }

