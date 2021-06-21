#include <bits/stdc++.h>
using namespace std;


struct Edge {
	int src; //source
	int dest; //destination
	int wt; //weight
};

bool compare(Edge e1, Edge e2){
	return e1.wt < e2.wt;
}


int findParent(int v, int *parent){
	if(parent[v] == v) return v;
	findParent(parent[v], parent);
}
void Krushkal(Edge *input, int n,int e){

	sort(input,input+e,compare);

	Edge *output = new Edge[n-1];
	int Count=0,i=0;
	int *parent =new int[n];
	for(int i=0;i<n;i++){
		parent[i] = i;
	}
	while(Count!=n-1){
		Edge currEdge = input[i];

		//now find the parent of source and destination of currEdge
		int sourceParent = findParent(currEdge.src,parent);
		int destinationParent = findParent(currEdge.dest,parent);

		if(sourceParent != destinationParent){
			output[Count] = currEdge;
			Count++;
			parent[destinationParent] = sourceParent;
		}
		i++;
	}


	for(i=0;i<n-1;i++){
		if(output[i].src < output[i].dest){
			cout<<output[i].src<<" "<<output[i].dest<<" "<<output[i].wt<<endl;
		}
		else{
			cout<<output[i].src<<" "<<output[i].dest<<" "<<output[i].wt<<endl;
		}
	}
}

int main()
{
	int n,e; //number of nodes and edges
	cin>>n>>e;

	Edge *input = new Edge[e];
	for(int i=0;i<e;i++){
		int s,d,w;
		cin>>s>>d>>w;
		input[i].src = s;
		input[i].dest = d;
		input[i].wt = w;

	}

	Krushkal(input,n,e);

}
