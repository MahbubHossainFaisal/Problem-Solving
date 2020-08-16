/*
Anagram means ,suppose there are two strings s1 and s2
s2 must have the alphabets or signs that s1 has,the two strings will be built using the same alphabet

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int h[26]={0};
    int i;



   if(s1.size()==s2.size())
   {
        for(i=0;i<s1.size();i++)
    {
        h[s1[i]-97]+=1;
    }
     for(i=0;i<s2.size();i++)
    {
        h[s2[i]-97]-=1;
        if(h[s2[i]-97]<0)
        {   cout<<"Strings are not anagram"<<endl;
            break;
        }
    }
    if(i==s2.size())
    {
        cout<<"Strings are anagram"<<endl;
    }

   }
   else
   {
       cout<<"Give proper strings to compare"<<endl;
   }





}
