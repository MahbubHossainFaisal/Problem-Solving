#include <bits/stdc++.h>
#include <queue>
#include <vector>
#define MAX 100009
using namespace std;

vector<int>graph[MAX];
queue<int>Q;
int color[MAX];
int order[100];
int c ;
int node,edges;
void BFS(int startNode)
{
    int fr,next;
   Q.push(startNode);
   color[startNode] =1;
   while(!Q.empty())
   {
    fr = Q.front();
    order[c++]=fr;

   Q.pop();
       for(int i=0;i<graph[fr].size();i++)
       {
           next= graph[fr][i];
           if(color[next]==0)
           {
               Q.push(next);
               color[next]=1;
               cout<<fr<<" "<<next<<endl;

           }

       }
   }

}

int main()
{

cin>>node>>edges;
for(int i=0;i<edges;i++)
{
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);

}
 /*for(int j=1;j<node;j++)
    {
        cout<<j<<" :";
        for(int k=0;k<graph[j].size();k++)
        {
            cout<<graph[j][k]<<" ";
        }
        cout<<"\n";
    } */

int StartNode;
cout<<"Enter starting node : ";
cin>>StartNode;
BFS(StartNode);

//this prints the order of bfs.
for(int k =0;k<node;k++)
{
    cout<<order[k]<<" ";
}

}
