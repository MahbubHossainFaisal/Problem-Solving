
#include <iostream>
using namespace std;
void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int a,b;
    a=10;
    b=20;
    Swap(&a,&b);
    cout<<a<<b;
}
