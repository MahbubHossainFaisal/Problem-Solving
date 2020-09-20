#include<iostream>
using namespace std;


void triangle(int a,int b)
{
    int total=180;
    int c=total-(a+b);
    cout<<c;
}
void RealTriangle(int a,int b)
{
 int total=180;
    int c=total-(a+b);
    cout<<c;
}
int main()
{
    int a,b;
    //a is the first angle of the triangle
    //b is the second angle of the triangle
    cin>>a>>b;
    int d=10;// d is a normal value which is not used for the triangle angle calculation.
    bool p= true ;
    if(p==true)
    triangle(a,d);
    //here triangle function parameter should be a and b but I'm passing d . So a computational error will happen.
    else
    RealTriangle (a,b);

    //Here I use a wrong predicate value which is p=true. For this reason a wrong function will be called which is the triangle function.
    //But The RealTriangle function was the true solution.So the p value need to be false.
    //So this error is called Domain Error.
}

