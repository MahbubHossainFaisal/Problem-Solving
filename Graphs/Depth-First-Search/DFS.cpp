#include<bits/stdc++.h>
using namespace std;

void DFS(int g[][7],int si,int n)
{
    static int visited[7]={0};



    if(visited[si]==0)
    {


    cout<<si<<" ";
    visited[si]=1;
    for(int v=1;v<n;v++)
    {
        if(g[si][v]==1 && visited[v]==0)
        {
            DFS(g,v,n);
        }
    }
    }
}

int main()
{

    int g[7][7]={ {0,0,0,0,0,0,0},{0,0,1,1,0,0,0},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};
    int si,n;
    n=7;
    cout<<"Enter a starting index:  ";
    cin>>si;
    cout<<"The nodes exploration using DFS is:"<<endl;
    DFS(g,si,n);




}
