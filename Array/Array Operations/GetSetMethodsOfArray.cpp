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

int GET(struct Array arr,int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.a[index];
    }
}

void SET(struct Array *arr,int index,int value)
{
    if(index>=0 && index<arr->length)
    {
        arr->a[index]=value;
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

    cout<<endl;
    cout<<"Get a value by given an index number:  ";
    int index;

    cin>>index;
    cout<<"The value in that index is: "<<GET(arr,index);
    cout<<endl<<"Now give a new value to a particular index: "<<endl;
    int value;
    cout<<"Give index : "
    cin>>index;
    cout<<endl<<"Give value: "
    cin>>value;

    SET(&arr,index,value);
    cout<<"The value is changed!";
    Display(arr);

    return 0;









}

