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

void Append(struct Array *arr,int x) //inserting at the last position.
{
    if(arr->length < arr->Size)
    {
        arr->a[arr->length]=x;
        arr->length++;

         int i;
    cout<<endl<<"The elements in the array after appending : ";
    for(i=0;i<arr->length;i++)
    {
        cout<<arr->a[i]<<" ";
    }
    }
    else
    {
        cout<<"Sorry The array is full"<<endl;
    }
}


// Insert function

void Insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
        int i;
        for(i=arr->length;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        }
        arr->a[index]=x;
        arr->length++;
        cout<<endl<<"The elements in the array after inserting : ";
    for(i=0;i<arr->length;i++)
    {
        cout<<arr->a[i]<<" ";
    }
    }
    else
    {
        cout<<"Please insert a proper index"<<endl;
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
    cout<<"Append an element in the array : ";
    int x;
    cin>>x;
    Append(&arr,x);
    cout<<endl;

    cout<<"Now insert an element in the array:  "<<endl;
    cout<<"Enter the index where you want to insert:  ";
    int index;
    cin>>index;
    cout<<"Enter the value of the index :  ";
    cin>>x;
    Insert(&arr,index,x);





}
