/*
If we declare 2d array with a fixed size the column size cannot be changed

but by declaring it dynamically we can change the column size in each row as our wish

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n; //in this problem column and row number is same
    int** arr = new int*[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];

        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int col=0;col<n;col++)
    {
        if(col%2==0){
            for(int row=0;row<n;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        } else {
            for(int row=n-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
    return 0;

}
