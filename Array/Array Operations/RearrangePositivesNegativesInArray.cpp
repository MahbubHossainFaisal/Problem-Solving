
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

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while(arr->a[i]<0)i++;
        while(arr->a[j]>=0)j--;
        if(i<j)
        {
            int temp=arr->a[i];
            arr->a[i]=arr->a[j];
            arr->a[j]=temp;
        }
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
    cout<<endl<<"After Rearranging the array it becomes : ";
    Rearrange(&arr);











}

