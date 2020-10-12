#include <bits/stdc++.h>
using namespace std;
 int source,destination;
 int cnt=0;
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

    void prepare(int v)
    {
        bool *visited=new bool[v];

        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        DepthFirstSearch(source,visited);

    }

    void DepthFirstSearch(int v,bool visited[])
    {
        if(v==destination)
            {
                return;
            }

        visited[v]=true;
        cnt++;


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

    int vertex,edge;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>vertex>>edge;
        int x,y;
        DFS d(vertex);
        for(int i=1;i<=edge;i++)
        {
            cin>>x>>y;
            d.addEdge(x,y);
        }

        cin>>source>>destination;
        d.prepare(vertex);
        cout<<cnt<<endl;
        cnt=0;


    }

    return 0;


}

