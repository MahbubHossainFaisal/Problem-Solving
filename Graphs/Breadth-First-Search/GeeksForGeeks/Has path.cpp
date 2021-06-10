#include <bits/stdc++.h>
using namespace std;


bool hasPath(int **graph, bool* visited ,int n, int sv, int ev){
    
     queue<int> q;
    q.push(sv);
    visited[sv] = true;

    while(!q.empty()){
        int element = q.front();
        //cout<<element<<" ";
        q.pop();
        if(element == ev) return true;
       
        for(int i=0; i<n; i++){
            if(i==element) continue;
            if(graph[element][i] == 1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
    return false;
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

bool *visited = new bool[n];
    //initializing visited array
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

  int sv = 4;
  int ev = 6;
  bool res = hasPath(graph,visited, n,sv,ev);
  cout<<res;

}
