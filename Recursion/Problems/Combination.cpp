#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int nCr(int n,int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;

}
//Another way using recursion

int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}



int main()
{
   // cout<<nCr(5,4);
   cout<<NCR(10,4);

}
