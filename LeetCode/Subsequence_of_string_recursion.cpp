#include <bits/stdc++.h>
using namespace std;

void subsequenceOfString(string input, string output){
   if(input.size() == 0){
      cout<<output<<endl;
      return;
   }
   //include a character
   subsequenceOfString(input.substr(1),output+input[0]);
   // exclude a character
   subsequenceOfString(input.substr(1),output);
   

}

int main(){
  
  string s;
  cin>>s;

  string output = "";
  subsequenceOfString(s,output);

  cout<<output<<endl;
}