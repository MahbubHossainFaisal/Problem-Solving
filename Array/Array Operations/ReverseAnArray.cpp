
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

void Reverse(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        int temp=arr->a[i];
        arr->a[i]=arr->a[j];
        arr->a[j]=temp;
    }
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
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.length=n;
    Display(arr);

    cout<<endl<<"The reverse of this array will be : ";
    Reverse(&arr);










}

