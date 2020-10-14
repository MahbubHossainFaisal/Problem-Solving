
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

int length=s.length();
    int i;
   if(s[0]=='/' && s[1]=='/')
   {
       cout<<"It's a single line comment"<<endl;
   }

   else if(s[0]=='/' && s[1]=='*' && s[length-2]=='*' && s[length-1]=='/')
   {
       cout<<"It's a multiline comment" <<endl;
   }
   else {
    cout<<"Not a comment"<<endl;
   }
}
