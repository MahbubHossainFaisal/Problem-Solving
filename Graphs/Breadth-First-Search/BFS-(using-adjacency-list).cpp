#include <bits/stdc++.h>
using namespace std;


class BFS
{
private:
    int v;
    list <int> *adj;
public:
    BFS(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void addEdge(int vertex,int edge)
    {
        adj[vertex].push_back(edge);
    }
    void BreadthFirstSearch(int s)
    {
        bool *visited= new bool[v];
        list <int> q;

        for(int i=0;i<v;i++)
            {
                visited[i]=false;
            }

        visited[s]=true;
        q.push_back(s);

        while(!q.empty())
        {
            s=q.front();
            cout<<s<<" ";
            q.pop_front();

            for(auto i=adj[s].begin(); i!=adj[s].end(); ++i)
            {
                if(!visited[*i])
                {
                    visited[*i]=true;
                    q.push_back(*i);
                }
            }
        }
    }
};

int main()
{
    BFS b(7);
   b.addEdge(1,2);
    b.addEdge(1, 3);
    b.addEdge(2, 4);
    b.addEdge(2, 5);
    b.addEdge(3, 5);
    b.addEdge(4, 5);
     b.addEdge(4, 6);
      b.addEdge(5, 6);
    b.BreadthFirstSearch(1);
}


