
#include <bits/stdc++.h>
using namespace std;

void print(int* p)
{
    cout<<*p<<endl;
}

void incrementAddress(int* p)
{
   p=p+1;
   cout<<"increment address function : "<<p<<endl;
   //this increment of p will effect just this function's pointer p. It will point to the next 4 byte address
   //but it won't effect the main function's pointer because here we are using the copy only.
}

void incrementValue(int *p)
{
    (*p)++;
    // as this pointer and the main function's pointer holding the same address
    //so, no matter where we are changing the value of the particular memory address
    //it will change for all,who are holding the same memory address.
}


int sum1(int *a,int Size)
{
    int res=0;
    for(int i=0;i<Size;i++)
    {
        res+=a[i];
    }
    return res;

}

int sum2(int *a,int Size)
{
    int res=0;
    for(int i=0;i<Size;i++)
    {
        res+=a[i];
    }
    return res;
}


int main()
{
    int i=10;
    int *p = &i;
    print(p); // this is sending a copy of p pointer to the print function

    cout<<p<<endl;
    incrementAddress(p);
    cout<<p<<endl; //address value will not change.

    cout<<*p<<endl;
    incrementValue(p);
    cout<<*p<<endl; //the value will change.


    int a[]={1,2,3,4,5,6,7,8};

    cout<<sum1(a,8)<<endl;

    //we can also send a part of an array as the reciver function getting it as a pointer

    cout<<sum2(a+3,5)<<endl;;

}
