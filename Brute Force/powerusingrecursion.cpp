#include<iostream>
using namespace std;

int Power(int m,int n)
{
    if(n==0)

        return 1;
    if(n%2==0)
        return Power(m*m,n/2);
    if(n%2!=0)
        return m*Power(m*m,(n-1)/2);

}

int main()
{
   int r= Power(3,5);
   cout<<r;
   // return 0;
}
