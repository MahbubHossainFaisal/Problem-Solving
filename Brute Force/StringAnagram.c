#include<iostream>
using namespace std;

int main()
{
    char a[]="decimal";
    char b[]="medical";
    int i,j;
    char h[26];
    for(i=0;h[i]!='\0';i++)
    {
        h[i]=0;
    }

    for(i=0;a[i]!="\0";i++)
    {
        h[a[i]-97]+=1;
    }

     for(i=0;b[i]!="\0";i++)
    {
        h[b[i]-97]-=1;
    }

    for(i=0;h[i]!='\0';i++)
    {
        if(h[i]=='0')
        {
            cout<<"The strings are anagram!!";
        }
        else
            cout<<"The strings are not anagram";
    }

}
