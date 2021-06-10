#include <bits/stdc++.h>
using namespace std;

void printBfs(int **graph, int n, bool *visited, int sv){


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

void printDfs(int **graph, int n, bool *visited, int sv){
    cout<<sv<<endl;
    visited[sv] = true;

    for(int i=0; i<n;i++){
        if(i == sv) continue;
        if(graph[sv][i] == 1 && !visited[i]){
            printDfs(graph,n,visited,i);
        }
    }
}


void bfs(int **graph,int n){
    bool *visited = new bool[n];
    //initializing visited array
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            printBfs(graph,n,visited,i);
        }
    }
}

void dfs(int **graph,int n){
    bool *visited = new bool[n];
    //initializing visited array
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDfs(graph,n,visited,i);
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
  bfs(graph,n);
  cout<<"DFS---------->>>>>>"<<endl;
  dfs(graph,n);

}