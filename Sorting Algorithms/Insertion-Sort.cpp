/* Insertion Sort:

In this sort - We will first assume that ,the first element of the array is in sorted position.
Then we keep checking the other elements.Like we first take the second element and compare with
the first element.If second element is smaller,we will swap them.Then we will take the third element
and compare with the first two elements and find where the third elements position for making the
first three elements sorted.We will continue this till the last element of the array.At last
all the elements of the array will be in sorted position.

*/


#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}

void Display(int arr[],int n)
{
    cout<<"After sorting with Selection sort: ";
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int arr[]={1,65,45,28,47,24,75,83,2,14,5,8,4};
    int length=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,length);
    Display(arr,length);
}
