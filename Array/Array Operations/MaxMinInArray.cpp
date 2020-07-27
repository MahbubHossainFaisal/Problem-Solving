
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

int Max_Element(struct Array arr)
{
    int Max=arr.a[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.a[i]>Max)
            Max=arr.a[i];
    }
    return Max;
}
int Min_Element(struct Array arr)
{
    int Min=arr.a[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.a[i]<Min)
            Min=arr.a[i];
    }
    return Min;
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

    cout<<endl;
    cout<<"Max ELement in this array is : "<<Max_Element(arr)<<endl;
    cout<<"Min Element in this array is : "<<Min_Element(arr);
    return 0;










}

