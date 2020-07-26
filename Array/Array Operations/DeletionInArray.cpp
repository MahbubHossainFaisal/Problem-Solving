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

void Delete(struct Array *arr,int x)
{
    if(x>=0 && x<arr->length)
    {
        int c=arr->a[x];
        int i;
        for(i=x; i<arr->length-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        cout<<c<<" "<<"is deleted from the array."<<endl;
    }
    else
    {
        cout<<"You have inserted an wrong index to delete " <<endl;
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
    cout<<"Give the index number to delete an element:   ";
    int x;
    cin>>x;
    Delete(&arr,x);
    cout<<endl<<"Now the remaining array elements are: ";
    Display(arr);




}

