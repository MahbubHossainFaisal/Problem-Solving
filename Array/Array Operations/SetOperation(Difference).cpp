
#include<iostream>
using namespace std;

void Difference(int a[],int b[],int c[])
{
    int i,j,k;
    i=0;j=0;k=0;
    while(i<5 && j<6)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else if(b[j]<a[i])
        j++;
        else
        {
            i++;
            j++;
        }

    }
    for(;i<5;i++) //Remaining elements in the array a will be stored here
    {
        c[k++]=a[i];
    }


    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }

}

int main()
{
    int a[5]={1,2,3,4,5};//Elements must be sorted before passing as arguments.
    int b[6]={2,3,4,9,10,11};//Elements must be sorted before passing as arguments.
    int c[11];
    Difference(a,b,c);
}
