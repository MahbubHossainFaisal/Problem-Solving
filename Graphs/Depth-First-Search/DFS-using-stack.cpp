
#include<bits/stdc++.h>
using namespace std;

class DFS
{
private:
    int V;
    list <int> *adj;
public:
    DFS(int V)
    {
        this->V=V;
        adj=new list <int> [V];
    }

    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    void DepthFirstSearch(int s)
    {
        vector <bool> visited(V,false);
        stack <int> st;

        st.push(s);

        while(!st.empty())
        {
            s=st.top();
            st.pop();
            if(!visited[s])
            {
                cout<<s<<" ";
                visited[s]=true;
            }
            for(auto i=adj[s].begin(); i!=adj[s].end();++i)
            {
                if(!visited[*i])
                {
                    st.push(*i);
                }
            }
        }

    }
};

int main()
{
    DFS d(5);

    d.addEdge(0,3);
     d.addEdge(0,2);
      d.addEdge(1,0);
       d.addEdge(2,1);
        d.addEdge(3,4);
         d.addEdge(4,0);
    d.DepthFirstSearch(0);


}
