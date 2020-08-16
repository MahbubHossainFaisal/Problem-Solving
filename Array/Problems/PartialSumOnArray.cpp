#include<bits/stdc++.h>
using namespace std;

#define Max  100
int s[Max]={0};
void partialSum(int arr[],int n)
{
   int i,j;
   s[0]=arr[0];
   for(i=1;i<n;i++)
   {
       s[i]=s[i-1]+arr[i];

   }
   cout<<"Give the positions:  "<<endl;
   int x,y;
   cin>>x>>y;
   int result=s[y]-s[x-1];
   cout<<"The sum is : "<<result;



}

int main()

{
    int arr[10]={2,7,-3,8,5,10,-2,5,11,-1};
    int n=10;
    partialSum(arr,n);
}
