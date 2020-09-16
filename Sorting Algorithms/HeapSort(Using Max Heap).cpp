/* Heap Sort:
It is same as creating a max heap or min heap.
I max heap while deleting elements,we take the last leaf node element and
 swap it with the root node .after swapping we take the necessary steps to make
 that a proper max or min heap again.

 In heap sort,after deleting the root node element,we have to make that element added in the
 last index of the array,every time we delete an element ,it should be added in the last of
 that array which we used to create the heap.If we continue deleting all the elements and keep
 adding them in the last index.After all the heap element is deleted ,the array will be sorted.

 For using max heap,this sort will be in increasing order.

 */


#include<bits/stdc++.h>

using namespace std;


void display(int arr[])
{

    for(int i=1;i<=10;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Time complexity of this insert function will be nlog(n)
void Insert(int arr[],int n)
{
    int temp,i=n;
    temp=arr[n]; //storing the last element value of the array
    //the while loop will run till i reaches the first element and temp value is greater than it's parent value
    while(i > 1 && temp > arr[i/2])
    {
        arr[i]=arr[i/2]; //if child value is greater than parent value then we are changing it.
        i=i/2; //going to the previous parent index.(backword)
    }
    arr[i]=temp;

}

void Delete(int arr[],int n)
{


    int i,j,x;
    x=arr[1];
    arr[1]=arr[n];
    i=1;
    j=i*2; //pointing to the left child.

    while(j<n)
    {
        //first we will compare the left child and right child .If right child is greater j will point that.
        if(arr[j+1]>arr[j])
        {
            j=j+1;
        }
        if(arr[i]< arr[j] ){

            int temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            i=j;
            j=2*j;
        }
        else {
            break;
        }
    }
    arr[n]=x;
}



int main()
{
    int *arr=new int[11]{0,10,20,30,25,5,40,35,28,38,54};
     int i;
     //creating heap using the above array elements by sending the elements one by one.
    for(i=2;i<=10;i++)
    {
        Insert(arr,i);
    }
    cout<<"Max Heap: ";
    display(arr);

    int n=10;

   while(n!=1){
    Delete(arr,n--);
   }
   cout<<endl<<"Heap Sort: ";
    display(arr);

}


