#include <bits/stdc++.h>
using namespace std;
int countLength(char arr[]){
    if(arr[0] =='\0') return 0;

    int smallerInput = countLength(arr+1);

    return 1+smallerInput;
}

int main()
{
    char arr[100] ;
    cin>>arr;

    int len = countLength(arr);
    cout<<len<<endl;
    return 0;
}