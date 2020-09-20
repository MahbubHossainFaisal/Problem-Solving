#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int temp=a[0];
    for(int i=0;i<9;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<9;i++)
    {
        cout<<a[i];

    }
    a[10]=temp;
    cout<<temp;
}
