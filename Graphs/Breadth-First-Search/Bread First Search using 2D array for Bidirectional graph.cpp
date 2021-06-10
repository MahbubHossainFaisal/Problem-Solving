#include <bits/stdc++.h>
using namespace std;

void bfs(int **graph, int n, int sv){

    bool *visited = new bool[n];
    //initializing visited array
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

    queue<int> q;
    q.push(sv);
    visited[sv] = true;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<endl;
        for(int i=0; i<n; i++){
            if(i==element) continue;
            if(graph[element][i] == 1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}


int main()
{
  int n,e;
  cin>>n>>e;

  int **graph = new int*[n];

// initializing 2d array
  for(int i=0;i<n;i++){
    graph[i] = new int[n];
    for(int j=0;j<n;j++){
        graph[i][j] = 0;
    }
  }

  //taking input of edges
  for(int i=0; i<e; i++){
    int f,s;
    cin>>f>>s;
    graph[f][s] =1;
    graph[s][f] =1;
  }



  int sv =0;
  cout<<"BFS---------->>>>>>"<<endl;
  bfs(graph,n,sv);

}