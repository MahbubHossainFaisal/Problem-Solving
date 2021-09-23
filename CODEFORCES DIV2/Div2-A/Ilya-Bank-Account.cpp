#include <bits/stdc++.h>
using namespace std;




int main()
{
   string s;
   cin>>s;

   string opt1,opt2;
   for(int i=0; i<s.size()-1; i++){
      opt1.push_back(s[i]);
   }
   for(int i=0; i<s.size()-2; i++){
      opt2.push_back(s[i]);
   }
   opt2.push_back(s[s.size()-1]);
   int opt00 = stoi(s);
   int opt11 = stoi(opt1);
   int opt22 = stoi(opt2);

   //cout<<opt11<<" "<<opt22<<endl;
   if(opt00 >= 0){
      cout<<opt00;
   }
   else{
      cout<<max(opt11,opt22);
   }


}