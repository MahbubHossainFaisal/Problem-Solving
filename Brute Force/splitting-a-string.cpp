#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s="I-am-a-student";
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='-')
        {
            cout<<endl;
            continue;
        }
        else{
            cout<<s[i];
        }
    }
}
