#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
   getline(cin,s);
    int i,j;
    for(i=0,j=s.size()-1;i<j;i++,j--)
    {
        int temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;

}
