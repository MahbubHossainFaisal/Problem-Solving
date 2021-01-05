#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[5]={1,2,3,4,5};

    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;

    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<" "; //so we can get array index values using pointers
    }
    cout<<endl;
    int *p = a; //this pointer will just point the first index of a.
    cout<<p<<endl;
    cout<<sizeof(a)<<endl; //20
    cout<<sizeof(p)<<endl; //4 (pointer size)

    int *q = &a[0]; //this will store the same address value which p did .
    cout<<q<<endl;
    cout<<*q<<endl; // it will print the value of the first index of a.

    int *t = &a[3]; // specific index address can also be stored in a pointer
    cout<<t<<endl;
    cout<<*t<<endl;

    cout<<p<<endl; //this will print value of p pointer stored
    cout<<a<<endl;//this will  print the address o 0th index of a array
    cout<<&p<<endl; // this will print the address of p pointer
    cout<<&a<<endl; // this will print the address of 0th index of a array
    cout<<*p<<endl; //this will print the value of the memory address which address is stored in the p pointer
    cout<<a[0]<<endl; // this will print the value of first index of a.

    //array a size can't be reassigned . so a++ or a-- those are not possible.
    //but pointer size can be reassigned.
}
