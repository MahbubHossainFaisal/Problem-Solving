#include<bits/stdc++.h>
using namespace std;


void colorGraph(vector<vector<int>> graph, int v){
    int result[v];
    bool colored[v];

    result[0]=0;
    for(int i=1;i<v;i++) result[i] =-1;
    for(int i=0;i<v;i++) colored[i] = false;

    int chromaticNum=0;
    for(int i=1;i<v;i++){

        for(auto x: graph[i]){
            if(result[x]!=-1){
                colored[result[x]] = true;
            }
        }
    
    int cr;
    for(cr=0;i<v;cr++){
        if(colored[cr] == false) break;
    }
    result[i]=cr;
    chromaticNum=max(chromaticNum,cr+1);

    for(auto x: graph[i]){
         if(result[x]!=-1){
                colored[result[x]] = false;
            }
    }
    
}
cout<<"Min color needed--->"<<chromaticNum<<endl;

    for(int i=0;i<v;i++) cout<<result[i]<< " ";
}


int main()
{
     int v,e;
     cin>>v>>e;

     vector<vector<int>> graph(v);

     for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;

        graph[x].push_back(y);
        graph[y].push_back(x);

     }

     colorGraph(graph,v);
}
