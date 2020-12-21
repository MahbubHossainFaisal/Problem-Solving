/*
Link: https://codeforces.com/problemset/problem/59/A
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cntSmall=0,cntCapital=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122){
            cntSmall++;
        }
        else {
            cntCapital++;
        }
    }
    if(cntSmall>=cntCapital){
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    else {
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]=s[i]-32;
            }
        }
    }

    cout<<s;
    return 0;
}
