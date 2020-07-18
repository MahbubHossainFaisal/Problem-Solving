#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1; //This can't be return 0 because while n will be decreasing and decreased to
        // 0 , The whole multiplication will be 0.
    }
    else
    {
        return fact(n-1)*n;
    }
}

int main()
{
    int n;
    cin>>n;
    int result=fact(n);
    cout<<result;
    return 0;

}

