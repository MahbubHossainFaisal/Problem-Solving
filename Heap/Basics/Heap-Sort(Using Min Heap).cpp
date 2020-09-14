


#include<bits/stdc++.h>

using namespace std;


void display(int arr[])
{
    for(int i=1;i<=9;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Time complexity of this insert function will be nlog(n)
void Insert(int arr[],int n)
{
    int temp,i=n;

    temp=arr[n]; //storing the last element value of the array
    //the while loop will run till i reaches the first element and temp value is smaller than it's parent value
    while(i > 1 && temp < arr[i/2])
    {
        arr[i]=arr[i/2]; //if child value is smaller than parent value then we are changing it.
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
    j=2*i; //pointing to the left child.

    while(j<n)
    {
        //first we will compare the left child and right child .If right child is smaller j will point that.
        if(arr[j+1]<arr[j])
        {
            j=j+1;
        }
        if(arr[i] > arr[j] ){

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
    int *arr=new int[10]{0,10,20,30,25,5,35,55,60,70};
     int i;
     //creating heap using the above array elements by sending the elements one by one.
    for(i=2;i<=9;i++)
    {
        Insert(arr,i);
    }
    cout<<"Min Heap: ";
    display(arr);

    int n=9;

   while(n!=1){
    Delete(arr,n--);
   }
   cout<<endl<<"Heap Sort: ";
    display(arr);
}

