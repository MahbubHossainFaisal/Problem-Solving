#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Give the number of elements in the array:  ";
    int n,i,j;
    cin>>n;
    int *arr=new int[n];
    cout<<endl<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
     cin>>arr[i];//The array elements must be unique
    }



    int low, high;
    high=arr[0];
   for(i=0;i<n;i++) //This for loop is used to find the max element in that array because we need the max element to create the hash table
   {
    if(arr[i]>high)
        high=arr[i];
   }
    low=arr[0];//This low variable is actually used to find the second max value in that array so we can make the hash table size(low+high)
   for(i=0;i<n;i++) //This for loop is used to find the max element in that array because we need the max element to create the hash table
   {
    if(arr[i]>low && arr[i]<high) //For finding the second max value in the array after high
        low=arr[i];
   }
        int sum;
        cout<<endl<<"Give a sum number to match with the pair:  ";
        cin>>sum;
    int *Hash=new int[high+low]();//The () is used to initialized the dynamic array with 0
    for(i=0;i<n;i++)
    {

        if(sum-arr[i]>=0 && Hash[sum-arr[i]]!=0)
        {
             cout<<endl<<"The Pairs are : ( "<<sum-arr[i]<<","<<arr[i]<<" )"<<endl;

        }
    else
         Hash[arr[i]]++;

    }



}

