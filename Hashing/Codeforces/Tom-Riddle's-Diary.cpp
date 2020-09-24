#include <bits/stdc++.h>
using namespace std;

int main()
{


   int n;
   cin>>n;
   vector <string> v;
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       v.push_back(s);
   }


   for(int i=0;i<v.size();i++)
   {    int Count=0;
       string x=v[i];

       for(int j=i;j>=0;j--)
       {
           if(x==v[j])
            Count++;

       }
       if(Count>1)
       {
           cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
   }





}
