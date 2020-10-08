#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > Graph;
vector<int> arr;
//int arr[1001];
void DFS(int v)
{



    arr[v]=1;
    cout<<"->"<<v;
    for(int i=0;i<Graph[v].size();i++ )
    { int child=Graph[v][i];
        if(arr[child]==0)
        {
            DFS(child);
        }
    }
}
int main()
{
 int n,e,a,b;

    cin>>n>>e;
    Graph.resize(n+1);
    arr.resize(n+1);


    while(e--)
    {
        cin>>a>>b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }

    DFS(1);
}
