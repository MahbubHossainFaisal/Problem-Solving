
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

int BinarySearch(struct Array arr,int x)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(x==arr.a[mid])
            return mid;
        else if(x<arr.a[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
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
        cin>>arr.a[i]; //The elements should be sorted in the array in terms of binary search
    }
    arr.length=n;
    Display(arr);

    cout<<endl;
    cout<<"Insert an element to find the index number of that element in the array :   "<<endl;
    int x;
    cin>>x;

    int result =BinarySearch(arr,x);
    if(result==-1)
        cout<<"The element not found! Try again "<<endl;
    else
        cout<<"The index number is : "<<result;








}

