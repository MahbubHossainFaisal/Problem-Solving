#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a = 10;
    int *p = &a;
    cout<<p<<endl;
    p=p+1; // this increment means , pointer will point to the next 4 byte memory space
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl; // this increment means , pointer will point to the memory space which is placed after 2 four bytes memory space
    p=p-3;
    cout<<p<<endl; // this will give the same result of the first address value which was stored by the p pointer

    //Similarly if the pointer is a char pointer it will move 1 byte after increment
    // if the pointer is double type it will move 8 byte after one increment.


    int i=1,j=2;
    int *q=&i;
    cout<<*q<<endl;
    q++;
    cout<<*q<<endl;
    /*
    we can see that q will not print the value of j now which is  2
    because it's the next address of address i is address of j. address j
    can be anywhere in the memory.
    Only in arrays we can find the obvious values by keep incrementing pointer by 1
    because in array elements are stored in a sequence.
    So, in case of an array,increment or decrement of pointer make sense
    but in case of variables , it doesn't make sense.
    in comparison of smaller value or larger value of pointer, that case is also
    make sense only in terms of array traversing.smaller address value denotes the previous indexes,
    larger address values denotes the next indexes.
    */
    return 0;

}

