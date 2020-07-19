/* Excessive Recursion: If a recursion function call itself for the same value
again and again ,then that recursion is called as excessive recursion.
*/

#include <iostream>
using namespace std;

int fib(int n) // This is not efficient.Time complexity of this code will be O(2 power n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}

int a[100000];

int EffFib(int n)//This function is more efficient. Time complexity O(n);
{
    if(n<=1)
    {
        a[n]=n;
        return n;
    }
    else
    {
        if(a[n-2]==-1)
            a[n-2]=EffFib(n-2);
        if(a[n-1]==-1)
            a[n-1]=EffFib(n-1);
            return a[n-2]+a[n-1];
    }
}

int main()
{
    int i;
    for(i=0;i<100000;i++)
        a[i]=-1;

    //cout<<fib(5);
    cout<<EffFib(48);//More than 48 is not countable.Integer overflow will happen.
}

