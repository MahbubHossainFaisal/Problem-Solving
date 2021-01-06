
#include<bits/stdc++.h>
using namespace std;

void increment(int &x)
{
    //here x is a reference variable of main function's r variable.
    //So,if we change x,effect will be done in r also.
    x++;
}

int main()
{
    int i=10;

    int j=i;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl; // the value of j will not change like i because it's a new variable of it's own and has got a new address of his own

    int a = 10;
    int& b = a; // here b is a reference variable holding the same address of a.
//So reference variable doesn't create a new memory,It holds an existing memory address.
    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<a<<endl;
    cout<<b<<endl; // this time the value of b will change as along with a
    //because b is reference variable which is using the same memory address like a
    // so any changes among them will update them both.

    b++;
    cout<<a<<endl; //a will also change with b
    cout<<b<<endl;

    int c = 100;

    b=c; // we just declared b = c ,but what will happen is, both a,b will be changed

    cout<<a<<endl; //print 100
    cout<<b<<endl; //print 100
    cout<<c<<endl; //print 100

    c++;
    cout<<a<<endl; //print 100, won't change like c
    cout<<b<<endl; //print 100, won't change like c
    cout<<c<<endl; //print 101

    // so for reference variable we have to assign it with using & else it won't work
    // and if the reference variable is used to store an existing address
    // it can't be redeclared again with any other variable address.



    // The use of reference variable

    int r = 1000;
    cout<<r<<endl;
    increment(r);
    cout<<r<<endl;





}
