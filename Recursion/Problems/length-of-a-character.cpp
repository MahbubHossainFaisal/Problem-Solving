#include <bits/stdc++.h>
using namespace std;

int length(char arr[])
{
    if(arr[0]=='\0'){
        return 0;
    }
    int smallerLength = length(arr+1);

    return 1+smallerLength;
}

int main()
{
    char *arr= new char[100];

    cin>>arr;

    cout<<length(arr);
}
