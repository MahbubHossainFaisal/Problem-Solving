#include <bits/stdc++.h>
using namespace std;


int main()
{
    //constant variable
    const int x = 10; // it can't be change anymore.

   // x++;// it will give an error

    int j = 15;
    //constant reference from a non constant variable.
   const int& k = j ;
   cout<<j<<" "<<k<<endl;
    j++; // though j and k addressing the same memory space but only j can be able to change value there.
    //k++; // It won't work because it has been declared as a constant.
    cout<<j<<" " <<k <<endl;

    //from there we can see that , the path can be made constant.But the space is a variable.It can be changed.

    //We can read through k variable but can't write or update through k variable now.Only j can do that here.

    //constant reference from a constant variable
    const int y = 100;
    const int& x2 = y;
    cout<<y<<" "<<x2<<endl;
    //Both these variable will be used as a readonly. As they arey constant they just can be able to read the value of the memory space.

    //reference from a constant variable.
     const int cv= 123;
   // int& rcv=cv; // it can't be done here
    //because here i m trying to create a ref variable of a readonly variable or constant variable.
    // so where cv can't change the value,it is not possible for another reference variable to go there
    //and change the value

    // So it can be said that
    // I can create a constant reference variable of a variable
    //But
    // I can't create a reference variable of a constant variable.



    // in terms of pointer

    const int pt = 500;

    //int *p = &pt; // this also is an error. because there remains a possiblity of the pointer to  change the constant variable value.

    //So, this has to be declared like this.

    const int *p = &pt; // it says that p is a pointer of a constant integer.

    cout<<*p<<endl;


    // A constant pointe can be able to access a variable without any issue.Only the fact is,the pointer value can't be changed.









    //Another example of pointer

    int e=11,f=12;

    int const *pf = &e; // p is a pointer to a constant integer

    cout<<pf<<endl;
    pf=&f;// can do this here
    //(*pf)++; // can't do this here.
    cout<<pf<<endl;

    int * const pfa = &e; // pfa is a constant pointer to an integer
    cout<<*pfa<<endl;
    (*pfa)++; // this can be done here
    cout<<*pfa<<endl;

    //pfa= &a ; // this can't be done here because pfa is a constant pointer.

    int const * const pfaa = &f; // pfaa is a constant pointer to a constant integer.

    //pfaa= &e; // this can't be done here because pfaa is a constant pointer
    // (*pfaa)++; // this can't be done here because pfaa is pointing to a constant integer.
}
