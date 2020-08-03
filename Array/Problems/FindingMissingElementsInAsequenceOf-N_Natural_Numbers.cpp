#include<iostream>
using namespace std;

void Missing_Elements(int *arr,int n)
{
    int low=arr[0];
    int high=arr[n-1];
    int loop=high-low;
    int diff=low-0;
    int k=0;
    int x=0;
    for(int i=0;i<n;i++)
    {

        if((arr[i]-i)!=diff)
        {
                 x=(arr[i]-arr[i-1]);
                 int Count=arr[i-1];


                for(int j=1;j<=x-1;j++)
                {
                    cout<<++Count<<" is missing "<<endl;



                }




        }
    }
}


int main()
{
    int n,i;
    cout<<"Enter the number of elements in the array:  ";
    cin>>n;
    int *arr=new int[n];
    cout<<endl<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Missing_Elements(arr,n);

}
