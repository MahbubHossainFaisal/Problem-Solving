
/*
Problem: https://www.spoj.com/problems/ACODE/

*/



#include <bits/stdc++.h>
using namespace std;


int a_code(int *input,int sz,int *arr)
{
    if(sz==0 || sz==1){
        return 1;
    }

    if(arr[sz]>0){
        return 1;
    }

    int output= a_code(input,sz-1,arr);
    if(input[sz-2]*10+input[sz-1] <= 26)
    {
        output+=a_code(input,sz-2,arr);
    }
    arr[sz]=output;
    return output;
}
int main()
{
    int n;
    cin>>n;
    int sz=n;
    int cnt=0;
    while(n>=0){
        cnt++;
        n=n/10;
    }
    cout<<cnt<<endl;

    int *input = new int[cnt];
    for(int i=cnt-1;i>=0;i--)
    {
        input[i]=sz%10;
        sz=sz/10;
    }
    int *arr=new int[cnt+1];

    cout<<a_code(input,sz,arr)<<endl;
}
