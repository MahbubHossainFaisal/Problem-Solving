#include<iostream>
using namespace std;
int goforthree(int n,int m,int count)
{
    int gofortwo(int n, int m, int count);
    while(n<=m)
    {  if(n==m)
        {
            cout<<count;
            break;
        }
        n=n*3;
        count++;

        if(n*3>m)
        {
           n=n/3;
           count--;
           gofortwo(n,m,count);
        }

    }
}

int gofortwo(int n,int m,int count)
{
    while(n<=m)
    {
        if(n*2>m)
        {
            n=n/2;
            count--;
            goforthree(n,m,count);
        }
        n=n*2;
        count++;
        if(n==m)
        {
            cout<<count;
            break;
        }
    }

}





int main()
{
    int n,m,count;
    count=0;

    cin>>n>>m;
    goforthree(n,m,count);






}

