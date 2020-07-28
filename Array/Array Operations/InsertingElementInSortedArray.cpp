#include<iostream>
using namespace std;

struct Array{

    int *a;
    int Size;
    int length;

};

void Display(struct Array arr)
{
    int i;
    cout<<endl<<"The elements in the array are: ";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }

}

void Insert(struct Array *arr,int x)
{
    int i=arr->length-1;

    while(arr->a[i]>x && i>=0)
    {
        arr->a[i+1]=arr->a[i];
        i--;
    }
    if(i==-1)
        arr->a[0]=x;
    else
    arr->a[i+1]=x;
    arr->length++;

    for(i=0;i<arr->length;i++)
    {
        cout<<arr->a[i]<<" ";
    }
}

int main()
{
    struct Array arr;
    cout<<"Please Insert the size of the array:  ";
    cin>>arr.Size;
    cout<<endl;
    arr.a=new int[arr.Size];
    arr.length=0;
    int n,i;
    cout<<"How many numbers you want to store in the array:  ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements in a sorted way: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.length=n;
    Display(arr);

    cout<<endl<<"Insert an element in the sorted array:  ";
    int x;
    cin>>x;
    Insert(&arr,x);











}


