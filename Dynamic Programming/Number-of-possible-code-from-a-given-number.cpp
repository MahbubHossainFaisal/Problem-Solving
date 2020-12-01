
/* Problem:
Given a number ,say for example: 2314.
using this number how many string code can be generated? when 1=a,2=b.....26=z;

*/
int numberOfCodes(int arr[],int Size)
{
    if(Size == 0){
        return 1;
    }
    if(Size == 1){
        return 1;
    }
    int result = numberOfCodes(arr,Size-1);
    if(arr[Size-2]*10+arr[Size-1] <= 26){
        result+= numberOfCodes(arr,Size-2);
    }
    return result;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,1,4};

    int Size = sizeof(arr)/sizeof(arr[0]);

    cout<<numberOfCodes(arr,Size);
}
