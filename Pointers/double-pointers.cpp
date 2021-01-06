
/*
Pointer store the address of a variable.
Double pointer is a pointer which store the address of another pointer variable.

*/


#include <bits/stdc++.h>
using namespace std;


void increment1(int **t)
{
    t=t+1;
    //this will not effect the main function's double pointer t
    //it will only change in this function.
}
void increment2(int **t)
{
    *t=*t+1;
    //though this double pointer is a copy of main function's double pointer
    //As both the double pointers holding the same address of another pointer
    //if one of them changes the address value,automatic the value will be updated in both of them.
    //this will effect both the double pointers,this function + main function's double pointer as well.

}
void increment3(int **t)
{
    **t = **t+1;
    //though this double pointer is a copy of main function's double pointer
    //As both the double pointers holding the same address of another pointer which is holding the address of a variable
    //if one of them changes the address value,automatic the value will be updated in both of them.
    //this will effect both the double pointers,this function + main function's double pointer as well.
    //this will change the variable value from 10 to 11;
}

int main()
{
    int i=10;
    int* p = &i ; // p will hold the address of i

    int** t = &p ; // t will hold the address of pointer p

    cout<<&t<<endl; // this is double pointer t's own address
    cout<<t<<endl; // this the address of p which is stored in double pointer t
    cout<<*t<<endl; // this is the address of i which is stored by pointer p can also be traced by double pointer t
    cout<<**t<<endl; // this is the value of i whose address was stored by p pointer


    cout<<t<<" "<<&p<<endl; // these are the same
    cout<<*t<<" "<<p<<endl; //these are the same
    cout<<**t<<" "<<*p<<endl; //these are the same.

    cout<<t<<endl;
    increment1(t);
    cout<<t<<endl;
    cout<<**t<<endl;
    increment3(t);
    cout<<**t<<endl;
    cout<<*t<<endl;
    increment2(t);
    cout<<*t<<endl;
    cout<<i<<endl; // this value will become 11 as in increment3 function the pointer changes the address value by adding 1.


}
