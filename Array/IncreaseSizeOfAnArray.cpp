/* Size of array is fixed and it can't be increased but the element and the pointer
that was pointing to the array can be shifted to a larger array of your wish. */


#include<iostream>
using namespace std;

int main()
{
    int *p=new int[5];
    int i,j,k=0;

    cout<<"Array of P: ";
        for(j=0;j<5;j++)
    {
        p[j]=k;
        k++;
        cout<<p[j]<<" ";
    }
    cout<<endl;
    int *q=new int[10];
    cout<<"Array of Q: ";
    for(i=0;i<10;i++)
    {   if(i>4)
    {
        q[i]=0;
    }
    else
        {
            q[i]=p[i];
        }
        cout<<q[i]<<" ";

    }
    delete []p;//delete the previous p array
    p=q;//p will point to q array and hold the addresses
    q=NULL;//q pointer is removed that was pointing to q array
    cout<<endl;
    cout<<"New array of P is : "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<"New array of q is : "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<q[i]<<" ";
    }



}
