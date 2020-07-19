#include<iostream>
using namespace std;

double Taylor(int x,int n)
{
    static double s;
    if(n==0)
        return s;
    else
        s=(1+double(x)/double(n)*double(s));
        return Taylor(x,n-1);
}

int main()
{

    cout<<Taylor(1,10);
}



