#include <iostream>
using namespace std;
int n, a, b;
int main() {
    int a,b;
    cin>>a>>b;

    int first=0;
    int second =0;
    int draw=0;

    for(int i=1; i<=6; i++){
    

      if(abs(a-i) < abs(b-i)){
        first++;
      }
      else if(abs(b-i) < abs(a-i)){
        second++;
      }
      else{
        draw++;
      }
     
    }
    cout<<first<<" "<<draw<<" "<<second;

}