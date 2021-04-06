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
     cin>>arr[i];
    }



    int low, high;
    high=arr[0];
   for(i=0;i<n;i++) //This for loop is used to find the max element in that array because we need the max element to create the hash table
   {
    if(arr[i]>high)
        high=arr[i];
   }

    int *Hash=new int[high+1]();//The () is used to initialized the dynamic array with 0
    for(i=0;i<n;i++)
    {
        Hash[arr[i]]++;//incrementing the hash table index values
    }
    for(i=0;i<high+1;i++)
    {
        if(Hash[i]>1)
        {
            cout<<" "<<i<<" is duplicate &";
            cout<<" it"<<" is "<<Hash[i]<<" times!"<<endl;
        }

    }


}

