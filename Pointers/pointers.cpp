/*
definition: pointers are variables that store address of another variable

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 12;
    cout<<&p<<endl;// to find a variable address we have to use & before that variable
        // int q = &p; this will be invalid cz a variable can't store the address of another variable
        //cout<<q<<endl;
    int *pointer = &p; // now pointer variable is storing the address of p variable

    cout<<pointer<<endl; //this will print the address of p variable
    cout<<*pointer<<endl ; //this will print the value of p variable,this operator is called dereference operator
    cout<<sizeof(pointer)<<endl; // it will print 4 bytes.

    p++;

    cout<<p<<endl;
    cout<<*pointer<<endl;
    //both will give same updated result of p as they are pointing to same storage.

    (*pointer)++;
    cout<<p<<endl;
    cout<<*pointer<<endl;
    //both will give same updated result of p as they are pointing to same storage.


    p=16;
     cout<<p<<endl;
    cout<<*pointer<<endl;
//both will give same updated result of p as they are pointing to same storage.

    *pointer=23;
     cout<<p<<endl;
    cout<<*pointer<<endl;
    //both will give same updated result of p as they are pointing to same storage.


    int* q = pointer ; //now q pointer will point to the same variable which was pointer  variable pointing to.

    cout<<*q<<endl;

    p = 1000;
    cout<<p<<endl;
    cout<<*pointer<<endl;
    cout<<*q<<endl;
    // all of them will print the same value because they belongs to the same storage.



    int a;
    cout<<a<<endl; //will print a garbage
    a++;
    cout<<a<<endl;//increment the garbage value
    int *b;
    cout<<b<<endl; //will print a garbage address
    cout<<*b<<endl; //will try to go the garbage address and print the int value in the garbage address.


}
