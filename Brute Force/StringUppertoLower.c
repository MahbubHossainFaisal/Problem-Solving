//#include<iostream>
//using namespace std;

#include<stdio.h>

int main()
{
    char S[]="WELCOME";

    int i;
    for(i=0;i!='\0';i++)
    {
        S[i]=S[i]-32;
    }
    printf("%s",S);
}
