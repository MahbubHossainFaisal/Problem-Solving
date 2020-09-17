/*

In merge sort,we will assume all the elements under the array are
individual lists.So in every list there is only one element.As each
list has only one element,so it can be said that every list is sorted.

Say the array-> 8,3,7,4,9,2,6,5
we will do two way merge in the array means we will pick up to lists
at a time and merge them.
First -> 8,3 -> merging -> 3,8 ( became 1 single list)
then -> 7,4 -> merging -> 4,7 ( became 1 single list)
then -> 9,2 -> merging -> 2,9 ( became 1 single list)
then -> 6,5 -> merging -> 5,6 ( became 1 single list)
So,from 8 list ,now there are 4 lists after the first merge.
Earlier in the list there was just one element,but after doing 2 way merge
every lists now contain 2 elements.
Now we will use 2 way merging in the new 4 lists.
First -> 3,8,4,7 -> merging -> 3,4,7,8 ( became 1 single list)
then -> 2,9,5,6 -> merging -> 2,5,6,9 ( became 1 single list)

So,from 4 list ,now there are 2 lists after the second merge.
Earlier in the list there was just two element,but after doing 2 way merge
every lists now contain 4 elements.

Now we will use 2 way merging in the new 2 lists.
First -> 3,4,7,8,2,5,6,9 -> merging -> 2,3,4,5,6,7,8,9

So,after 3 passes,we got the sorted array.
Time complexity: O(nlogn)
Space complexity: 2n+logn
For comparison based sorting ,merge sort is the only one who use
extra space.(it uses an extra array,then for recursion purpose it uses the stack)
*/

#include<iostream>
using namespace std;

void Merge(int arr[],int low,int mid ,int high)
{
    int i=low,j=mid+1,k=low;
    int brr[100];

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            brr[k++]=arr[i++];
        }
        else {
            brr[k++]=arr[j++];
        }
    }

    for(;i<=mid;i++){
        brr[k++]=arr[i];
    }
    for(;j<=high; j++){
        brr[k++]=arr[j];
    }

    for(i=low;i<=high;i++){
        arr[i]=brr[i];
    }
}


void MergeSort(int arr[],int low,int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}



int main()
{
    int arr[]={32,23,1,4,2,6,15,35,48,64,33,87};
    int length=sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,11);
    cout<<"After Merge Sort: "<<endl;
    for(int i=0;i<length;i++)
    {

        cout<<arr[i]<<" ";

    }
}


















