#include <bits/stdc++.h>
using namespace std;


int findMinVertex(int *weights,int *visited,int n){
	int minVertex = -1;
	for(int i=0;i<n;i++){
		if(!visited[i] && (minVertex == -1 || weights[i] < weights[minVertex])){
			minVertex=i;
		}
	}
	return minVertex;
}

void prims(int **graph,int n){
	int *visited = new int[n];
	int *parent = new int[n];
	int *weights = new int[n];

	for(int i=0;i<n;i++){
		visited[i] = 0;
		weights[i] = INT_MAX;
	}

	weights[0] = 0;
	parent[0]=-1;
	for(int i=0;i<n;i++){
		int minVertex = findMinVertex(weights,visited,n);
		visited[minVertex] =1;
		for(int j=0;j<n;j++){
			if(!visited[j] && graph[minVertex][j]!=0){
				if(graph[minVertex][j] < weights[j]){
					weights[j] = graph[minVertex][j];
					parent[j]= minVertex;
				}
			}
		}
	}

	for(int i=1;i<n;i++){
		if(parent[i] > i){
			cout<<i<<"   "<<parent[i]<<"  "<<weights[i]<<endl;
		}
		else {
			cout<<parent[i]<<"   "<<i<<"  "<<weights[i]<<endl;
		}
	}
}


int main()
{
	int n,e;
	cin>>n>>e;

	int **graph = new int*[n];

	for(int i=0;i<n;i++){
		graph[i] = new int[n];
		for(int j=0;j<n;j++){
			graph[i][j] = 0;
		}
	}

	for(int i=0;i<e;i++){
		int src,dest,wt;
		cin>>src>>dest>>wt;
		graph[src][dest] = wt;
		graph[dest][src] = wt;
	}
	prims(graph,n);
}
