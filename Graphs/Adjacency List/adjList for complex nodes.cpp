#include <bits/stdc++.h>
using namespace std;

/*
basically we have worked with graphs for single int values or weights or nodes
that contains a int value.

But what about if a node contains complex data under it.
I mean, Suppose a node which contains all the information of an area.
Like, Narayanganj . It contains many things: name,size,connection with other areas,postal code etc.

How we represent a graph using those complex nodes
The solution is given below

*/

class Node{
public:
	string name;
	list<string> neighbours; 
	Node(string name){
		this->name = name;
	}
};

class Graph{
	unordered_map<string,Node*> m;
public:
	Graph(vector<string> cities){
		for(auto city : cities){
			m[city] = new Node(city);
		}
	}

	void addEdge(string x, string y, bool undirected = false){
		m[x]->neighbours.push_back(y);
		if(undirected){
			m[y]->neighbours.push_back(x);
		}
	}


	void printList(){
		for(auto cityPair: m){
			string city = cityPair.first;
			cout<<city<<"----->";
			Node* node = cityPair.second;
			for(auto neighbour: node->neighbours){
				cout<<neighbour<<",";
			}
			cout<<endl;
		}
	}
};

int main()
{
	vector<string> cities = {"Narayanganj","Dhaka","Comilla","Barishal","Sylhet","Rajshahi","Bogura"};
	Graph g(cities);

	g.addEdge("Narayanganj","Dhaka");
	g.addEdge("Dhaka","Comilla");
	g.addEdge("Dhaka","Barishal");
	g.addEdge("Dhaka","Sylhet");
	g.addEdge("Sylhet","Narayanganj");
	g.addEdge("Bogura","Comilla");
	g.addEdge("Barishal","Comilla");
	g.addEdge("Narayanganj","Comilla");
	g.addEdge("Rajshahi","Comilla");

	g.printList();

}