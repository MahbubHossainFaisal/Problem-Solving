
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

int numberOfCodesFaster(int arr[],int Size,int mem[])
{
    if(Size == 0){
        return 1;
    }
    if(Size == 1){
        return 1;
    }
    if(mem[Size]>0) return mem[Size];
    int result = numberOfCodes(arr,Size-1);
    if(arr[Size-2]*10+arr[Size-1] <= 26){
        result+= numberOfCodes(arr,Size-2);
    }
    mem[Size]=result;
    return result;
}

int numberOfCodesIterative(int arr[],int Size)
{
    int *output = new int[Size+1];
    output[0]=1;
    output[1]=1;

    for(int i=2; i<=Size; i++)
    {
        output[i]=output[i-1];
        if(arr[i-2]*10+arr[i-1] <= 26){
            output[i]+=output[i-2];
        }
    }
    int ans = output[Size];
    delete []output;
    return ans;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,1,4,1,1,1,1,1};

    int Size = sizeof(arr)/sizeof(arr[0]);
    int mem[Size+1]={0};
    cout<<numberOfCodesIterative(arr,Size);
}
