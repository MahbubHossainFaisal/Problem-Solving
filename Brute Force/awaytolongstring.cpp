#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int n;

    cin>>n;
    while(n--)
    {

        cin>>a;
    int k=a.size();
    if(k<=10)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<a[0]<<k-2<<a[k-1]<<endl;
    }
}}
