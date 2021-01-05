/*
char pointers behaves differently while printing address value.



*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3};
    char c[] = "abc";

    cout<<a<<endl; // it will print the address of 0th index
    cout<<c<<endl;// it will print only the whole char array value,not the address.

    char *p = &c[1]; // it will store the value from index 1 to final index of the char array but won't store address of the char array

    cout<<p<<endl; // it will print bc

    char e = 'f';
    char* g= &e;
    cout<<e<<endl;
    cout<<&e<<endl; //it will print the value of e along with some garbage
    cout<<g<<endl; // it will print the value of e along with some garbage

    //so cout is made like that , we can't find the address of the character values

    char arr[] = "abcde";
    // in c++ this string first get stored in a temporary memory after that gets a real memory that we can use


    //but if we do this
    char *arr = "abcde";
    //this will only point the temporary memory ,won't make a permanent which is not a proper way to declare char array.
}
