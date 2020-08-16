#include<bits/stdc++.h>
using namespace std;

struct item
{
    int value,weight;
    item(int value,int weight): value(value),weight(weight)
    {

    }
};

bool cmp(struct item a,struct item b)
{
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2;
}

double FKnapsack(int w,struct item arr[],int n)
{
    sort(arr,arr+n,cmp);

    int curweight=0;
    double finalvalue=0.0;

    for(int i=0;i<n;i++)
    {
        if(curweight+arr[i].weight<=w)
        {
            curweight+=arr[i].weight;
            finalvalue+=arr[i].value;
        }
        else
        {  int remain=w-curweight;
            finalvalue+=arr[i].value*((double)remain/arr[i].weight);
            break;
        }
    }
}

int main()
{
    int w=50;
   struct item arr[]={{60,10},{100,20},{120,30}};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"MAXIMUM PROFIT WILL BE:"<<FKnapsack(w,arr,n)<<endl;
    return 0;
}
