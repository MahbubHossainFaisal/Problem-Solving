#include <iostream>
using namespace std;

/* First 2D declaration is normal which will store in the stack memory */
void Stack2D()
{
    int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//The second method is declaring 2D array dynamically using pointer when the pointers
//will be in stack memory and the Arrays will be stored in heap memory
void StackHeap2D()
{
    int *a[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        a[i]=new int[3]; //declaring the array size;
    }
    int k=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=k++;//Assigning values
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";//printing dynamic 2D array
        }
        cout<<endl;
    }
    cout<<endl;
}

//The third method is using 2 pointers which will create the pointers in heap memory as
//well as the arrays in the heap memory.

void Heap2D()
{
    int **a;
    int i,j;
    for(i=0;i<3;i++)
    {
        a[i]=new int[3]; //declaring the array size;
    }
    int k=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=k++;//Assigning values
        }
    }

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";//printing dynamic 2D array
        }
        cout<<endl;
    }
}

int main()
{
    Stack2D();
    StackHeap2D();
    Heap2D();
}
