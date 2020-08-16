#include<bits/stdc++.h>
using namespace std;

//don't know why the code is not working
int main()
{
     long int h=0,x=0,i;
     string s;
     cin>>s;

     for(i=0;i<s.size();i++)
     {
         x=1;
         x=x<<s[i]-97;

         if(x&h>0)
         {
             cout<<s[i]<<" is duplicate "<<endl;
         }
         else
         {
             h=x|h;
         }
     }
}
