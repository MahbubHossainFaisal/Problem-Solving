/* If suppose a function(a) calling function(b),
function(b) calling function(c) and function(c) calling
function(a) ,That is called "Indirect Recursion"
So,if two or more functions calling each other by making a
cycle ,That will be called as Indirect Recursion */

#include <iostream>
using namespace std;
void CycleB(int n);//I have to declare it earlier too because the compiler will not find CycleB() function while it will be in Cycle.That's called prototype declaration.
void CycleA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        CycleB(n-1);
    }
}

void CycleB(int n)
{
    if(n>1)
    {
        cout<<n<<endl;
        CycleA(n/2);
    }
}


int main()
{
    int n;
    cin>>n;
    CycleA(n);
}
