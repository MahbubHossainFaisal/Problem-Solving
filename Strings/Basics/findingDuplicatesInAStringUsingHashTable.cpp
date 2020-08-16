#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int h[26]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<97)
        {
            s[i]=s[i]+32; //converted to small alphabets
        }
    }
    cout<<s<<endl;

    for(int i=0;i<s.size();i++)
    {
        h[s[i]-97]++;//to make the hashtable short we subtracted 97 else we have to make a big hash table to store the values
    }
    for(int i=0;i<s.size();i++)
    {
        if(h[i]>1)
        {
            cout<<char(i+97)<<" is duplicate! "<<endl;//to show the corresponding character
        cout<<"it is there for  "<<h[i]<<" times "<<endl;

        }
    }



}
