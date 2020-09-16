
/*
Definition: An element in the array is in sorted position if
all the elements to the left are smaller than the pointed element and
all the elements to the right are greater than the pointed element.
Procedure: Let's say array = 50,70,60,90,40,80,10,20,30,int_max

Now let the first element of the array as pivot element(which will find its position)
pivot element 50
i will point to pivot
j will point to last index which is max_int
now i will look for elements greater than pivot ,i will stop at Int_max
j will look for elements <= pivot ,j will stop after reaching pivot.

i++,j--;
i is pointing to 70
j is pointing to 30
i>pivot and j<pivot ,so interchange a[i],a[j]
Array becomes -> 50,30,60,90,40,80,10,20,70,int_max

i++,j--;
i is pointing to 60
j is pointing to 20
i>pivot and j<pivot ,so interchange a[i],a[j]
Array becomes -> 50,30,20,90,40,80,10,60,70,int_max

i++,j--
i is pointing to 90
j is pointing to 10
i>pivot and j<pivot ,so interchange a[i],a[j]
Array becomes -> 50,30,20,10,40,80,90,60,70,int_max

i++,j--
i=40 < pivot ,so it will just move ahead ,i++,i becomes 80

j=80 >pivot ,so it will move backword again ,j--,j becomes 40

Now i > j,so the whole array traversed by i and j.We have checked the entire list.

Now interchange pivot element with jth element.
Array becomes->40,30,20,10,50,80,90,60,70,int_max

so the pivot element 50 has got it place where the left elments are smaller
and the right elements are bigger.
Now there become three part 40,30,20,10 are unsorted
                            50 is in sorted position
                            80,90,60,70,Int_Max are unsorted.
So now we will again run quick sort to the smaller elements and to the
larger elements also.

for larger elements j can stop in Int_Max
    When j will stop for smaller elements?
    So we will take 50 as the stoppage for j for smaller elements.

That quick sort will continue recursively till all the elements are sorted.

This entire procedure is called partitioning procedure.

Time Complexity:
If all the elements of the array are in ascending order ,that time also the time complexity will be O(n2)
For worst case:if all the elements of the array are in descending order that time also the complexity will be O(n2)
which is same.
Best case: If partitioning is happening only in the middle ,for example one element will be in
sorted position and there are same number of smaller elements and same number of larger elements.
That time time complexity will be O(nlogn)
Average case: O(nlogn)

*/


#include<iostream>
using namespace std;

int Partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;

    do {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while(i<j);

    int temp=arr[low];
            arr[low]=arr[j];
            arr[j]=temp;
        return j;
}

void QuickSort(int arr[],int low,int high)
{
    int j;
    if(low<high){
        j=Partition(arr,low,high);
        QuickSort(arr,low,j);
        QuickSort(arr,j+1,high);
    }
}
int main()
{
    int arr[]={23,12,5,27,2,1,8,4,67,15,25,30,INT_MAX};
    int length=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,length-1);

    for(int i=0;i<length-1;i++){
        cout<<arr[i]<<" ";
    }

}
