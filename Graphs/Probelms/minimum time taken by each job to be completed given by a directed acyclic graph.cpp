#include<bits/stdc++.h>
using namespace std;


int main()
{
   int v,e;
   cin>>v>>e;
   vector<int> graph[v+1];
   vector<int> inDegree(v+1,0);

   for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    inDegree[y]++;
   }

   vector<int> minTime(v+1,0);

   queue<int> q;

   for(int i=1;i<=v;i++){
    if(inDegree[i] == 0){
        q.push(i);
        minTime[i] = 1;
    }
   }

   while(!q.empty()){
    int parent = q.front();
    q.pop();

    for(auto child: graph[parent]){

        inDegree[child]--;
        if(inDegree[child] == 0){
            minTime[child] = minTime[parent] +1;
            q.push(child);
        }
    }
   }
   cout<<"Min time for every job: ";
   for(int i=1;i<=v;i++) cout<<minTime[i]<<" ";

    return 0;
}
