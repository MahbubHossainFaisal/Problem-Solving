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

    sort(arr,arr+n);//To get the lowest and highest values.

    int low, high;
    low=arr[0];
    high=arr[n-1];
    //cout<<"The max element in the array is : "<<high<<endl;
    int *Hash=new int[high+1]();//The () is used to initialized the dynamic array with 0
    for(i=0;i<n;i++)
    {
        Hash[arr[i]]++;//incrementing the hash table index values
    }
    for(i=low;i<high+1;i++)
    {
        if(Hash[i]==0)
            cout<<" "<<i<<" is missing "<<endl;
    }


}
