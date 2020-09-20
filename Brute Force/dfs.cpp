#include<iostream>
using namespace std;

void print(int n,int **edges,int sv,bool *visited)
{
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++)
    {
        if(i==sv)
        {
            continue;
        }
        if(edges[sv][i]==1)
        {
            if(visited[i])
            {
                continue;
            }
            print(n,edges,i,visited);
        }
    }
}

int main()
{  cout<<"Give the vertex number and edge number: "<<endl;
    int n,e;
    cin>>n>>e;
    int **edges=new int *[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }
    cout<<"Give the edges: "<<endl;

    for(int i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    bool *visited=new bool[n];

    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }

    int sv;
    cout<<"Give a starting vertex: "<<endl;
    cin>>sv;
    cout<<"DFS is: "<<endl;
    print(n,edges,sv,visited);
}
