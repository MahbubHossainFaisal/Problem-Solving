
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
   long long int **arr = new long long int*[m]; // while making a dynamic 2D array we have to make each single pointer array to make a row
    //so here the size 10 is making sure that there are 10 rows in the 2D array.
    //now i can make different size column for each row or the column size can be same as my choice

   // Like this, arr[0]=new int[10];
    //arr[1]= new int[5];

    //Or we can keep all the column size same;

    for(int i=0;i<m;i++)
    {
        arr[i]=new long long int[n]; //so each column size will be n;

    }
    int a=10;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=a++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // deallocating memory of the 2d array .
    for(int i=0;i<n;i++)
    {
        delete[] arr[i];
    }
    delete [] arr;

    return 0;
}
