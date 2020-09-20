#include<iostream>
using namespace std;


double taylor(int x,int n)
{
    double s=1;
    double nom=1;
    double den=1;

    for(int i=1;i<=n;i++)
    {
        nom=nom*x;
        den=den*i;
        s+=nom/den;

    }
    return s;
}

int main()
{

    cout<<taylor(1,10);
    return 0;
}
