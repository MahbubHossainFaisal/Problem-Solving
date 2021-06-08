#include <bits/stdc++.h>
using namespace std;


void DFS(int **graph, int n, int start, int *visited){

    cout<<start<<endl;
    visited[start]=1;

    for(int i=0; i<n; i++){
        if(i == start) continue;

        if(graph[start][i] == 1){
        if(visited[i] == 1) {
            continue;
        }

        DFS(graph,n,i,visited);
        }
    }
}



int main()
{
   int nodes,edges;
   cin>>nodes>>edges;

   int** graph = new int*[nodes];
   int* visited = new int[nodes];

   //initializing 2D matrix
   for(int i=0;i<nodes;i++){
    graph[i] = new int[nodes];

    for(int j=0; j<nodes; j++){
        graph[i][j]=0;
    }

   }

   //Initializing visited array
   for(int i=0; i<nodes; i++){
    visited[i] = 0;
   }

   for(int i=0; i<edges; i++){

    int fv,sv;
    cin>>fv>>sv;

    graph[fv][sv] = 1;
    graph[sv][fv] = 1;

   }
   int start =0; //vertex we want to start with

   DFS(graph, nodes, start, visited);

   return 0;

}
