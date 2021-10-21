#include <bits/stdc++.h>
using namespace std;




int main() {

int n,k;
cin>>n>>k;


int store =0;
while(n--){
  string s;
  cin>>s;
  int cnt =0;
  for(int i=0; i<s.size(); i++){
    if(s[i] == '4' or s[i]== '7') ++cnt;
  }
  if(cnt <= k) store++;
}


cout<<store;

return 0;
}
