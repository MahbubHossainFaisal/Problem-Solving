
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5]={0};
    int x,y;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
        }
    }




    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]==1)
            {

                x=i;
              //  cout<<x<<endl;
                y=j;
              //  cout<<y<<endl;
                break;
            }
        }

    }
    x=abs(x-2);
    y=abs(y-2);
        cout<<x+y;
}
