/* This is a bubble sort algorithm

For n elements,n-1 passes will be held in bubble sort.
Time complexity of any sorting algorithms is based on number of
comparisons,Complexity of this algorithm is O(n2)
if we run this for one pass of element,we will get the largest element in the last.
then if we run this for two passes of element,we will get the two largest elements.
So,it can be said that if we run this for k passes,we will get k largest elements in the last.

It is adaptive(if elements are sorted from the beginning) and stable.
*/
#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
        //j<n-1-i because after every time j finish iteration one element will be sorted.
        //So one comparison will reduce.
            if(arr[j]>arr[j+1]){
                    //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void Display(int arr[],int n)
{
    int i;
    cout<<"After sorting elements with bubble sort: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}

int main()
{
    int arr[]={12,34,14,76,23,6,2,73,4,7,92,31};

    int Size=sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,Size);

    Display(arr,Size);
}
