#include<iostream>
using namespace std;

double taylor(int x,int n)
{
    static double s=1,p=1;
    double r;
    if(n==0)
        return 1;

    r=taylor(x,n-1);
    p=p*x;
    s=s*n;
    return r+p/s;
}


int main()
{
    cout<<"The result of taylor series u want to know is :"<<taylor(2,10);


}
