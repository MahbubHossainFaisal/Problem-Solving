#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==37 || s[i]==38)
        {

            if(s[i+1]=='&' || s[i+1]=='=')
                cout<<s[i];
            else {
                cout<<s[i]<<" ";
            }

        }

        if(s[i]==42 || s[i]==43 || s[i]==45 || s[i]==47 || s[i]=='|' || s[i]=='^')
        {
            if(s[i+1]=='=' || s[i+1]=='+' || s[i+1]=='-' || s[i+1]=='|')
            cout<<s[i];
            else {
                cout<<s[i]<<" ";
            }
        }

        if(s[i]>=60 && s[i]<=63)
        {
            if( s[i+1]=='>' || s[i+1]=='<' || s[i+1]=='=')
            cout<<s[i];
            else {
                cout<<s[i]<<" ";
            }
        }
    }
}
