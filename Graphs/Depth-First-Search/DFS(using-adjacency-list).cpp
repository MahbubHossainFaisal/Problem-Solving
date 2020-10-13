
#include <bits/stdc++.h>
using namespace std;

class DFS
{
private:
    int v;
    list <int> *adj;
public:
    DFS(int v)
    {
        this->v=v;
        adj=new list <int> [v];
    }

    void addEdge(int v,int edge)
    {
        adj[v].push_back(edge);
    }

    void prepare(int s)
    {
        bool *visited=new bool[v];

        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        DepthFirstSearch(s,visited);
    }

    void DepthFirstSearch(int v,bool visited[])
    {
        visited[v]=true;
        cout<<v<<" ";

        for(auto i=adj[v].begin();i!=adj[v].end();++i)
        {
            if(!visited[*i])
            {
                DepthFirstSearch(*i,visited);
            }
        }
    }
};


int main()
{
    DFS d(4);


    d.addEdge(0,1);
    d.addEdge(0,2);
    d.addEdge(1,2);
    d.addEdge(2,0);
    d.addEdge(2,3);
    d.addEdge(3,3);

    d.prepare(2);
}
