/*
Breadth First Search:

It is defined by two terms:
1.Visiting (going to a particular vertex)
2.Exploring (Visiting all the adjacent vertices of the particular vertex

Working:
Initialization:
Select the vertex and first push it in the queue.
Repeat:
Take out vertex from queue front and explore it and push that vertex in a vector.
while exploring insert all the new vertices to the queue which has not visited earlier.

After exploring all the vertices of a particular vertex,take out the second vertex from the queue
and start exploring it and also push that vertex in the vector.... and do the same till the last remaining vertex in the queue.

Now print all the elements in the vector.




*/



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[8][8];
    int x,y;
    for(int i=0;i<8;i++)
    {
        for(int j=1;j<8;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=1;i<=15;i++)
    {
      cin>>x>>y;
      arr[x][y]=1;
    }
    cout<<"Give the starting vertex:"<<endl;
    int sv;
    cin>>sv;

   //BFS(arr,sv);

   int u,v;
    int visited[8];
    for(int i=0;i<8;i++)
    {
        visited[i]=0;
    }
    queue <int> q;
    cout<<sv<<<<" ";
    visited[sv]=1;
    q.push(sv);
    while(!q.empty())
    {
       u=q.back();
       q.pop();
       for(v=1;v<8;v++)
       {
        if(arr[u][v]==1 && visited[v]==0)
        {
            cout<<v<<" ";
            visited[v]=1;
            q.push(v);
        }
       }
    }
}
