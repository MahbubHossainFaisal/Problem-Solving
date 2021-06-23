#include <bits/stdc++.h>
using namespace std;


class graph{
int V;
list <int> *l;

public:
	graph(int v){
		V=v;
		l=new list<int>[V];
	}

	void addEdge (int i,int j, bool undir=true){
		l[i].push_back(j);
		if(undir){
			l[j].push_back(i);
		}
	}

	void printList(){
		//Iterating over all rows
		for(int i=0;i<V;i++){
			//now getting into the adjacent nodes
			cout<<i<<"---->";
			for(auto node: l[i]){
				cout<<node<<",";
			}
			cout<<endl;
		}
	}


	void bfs(int src){
		queue<int> q;
		bool *visited = new bool[V]{0};

		
		q.push(src);
		visited[src]=1;

		while(!q.empty()){
			int f = q.front();
			cout<<f<<"---->";
			q.pop();
			for(auto nodes: l[f]){
				if(!visited[nodes]){
					q.push(nodes);
					visited[nodes] = 1;
				}
			}
		}


	
}
};

int main()
{
	graph g(6);

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);

	g.printList();
	cout<<"Breadth First Search: "<<endl;
	g.bfs(0);
}