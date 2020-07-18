// In terms of power of a number
#include <iostream>
using namespace std;

int power(int m,int n)
{
    if(m==0 || n==0)
        return 1;
    else
    {
        return power(m,n-1)*m;
    }

}

int main()
{
    int m,n;
    cin>>m>>n;
    int result =power(m,n);
    cout<<result;
}
