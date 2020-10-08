#include<bits/stdc++.h>
using namespace std;

void dfs(int arr[][],int sv,int n)
{
    int visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }

    cout<<"Here are the nodes exploration after Depth First Search!"<<endl;
    cout<<sv<<"  ";
    visited[sv]=1;
    for(int v=1;v<=n;v++)
    {

    }


}
int main()
{
    cout<<"How many Nodes you want to have?"<<endl;
    int n;
    cin>>n;
    int arr[n][n];
    int x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    cout<<"Give the edge number please:"<<endl;
    int e;
    cin>>e;
    cout<<"Please Insert the edges"<<endl;
    for(int i=1;i<=e;i++)
    {
      cin>>x>>y;
      arr[x][y]=1;
      arr[y][x]=1;
    }
    cout<<"Give the starting vertex:"<<endl;
    int sv;
    cin>>sv;

    bfs(arr,sv,n);
    dfs(arr,sv,n);

}
