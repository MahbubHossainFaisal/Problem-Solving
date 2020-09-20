#include<iostream>
using namespace std;

int main()

{

    char a[]="aovai";
    char b[]="vaiao";

     int i,j;
     int h[26];
    for(i=0;i<26;i++)
    {
        h[i]=0;
    }




    for(j=0;a[j]!='\0';j++)
    {
        h[a[j]-97]+=1;



}


     for(j=0;b[j]!='\0';j++)
    {
        h[b[j]-97]-=1;


    }



for(i=0;i<26;i++)
{
    if(h[i]!=0)
    {
        cout<<"Not anagram";
        break;
    }
}

if(i==26)
{
    cout<<"It's an anagram!!";
}








    }


