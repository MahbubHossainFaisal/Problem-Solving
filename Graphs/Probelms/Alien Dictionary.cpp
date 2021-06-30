#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>graph, vector<int> &vis, int src,string &order){
    vis[src] = 1;
    for(auto x: graph[src]){
        if(!vis[x]){
            dfs(graph,vis,x,order);
        }
    }
    char ch = src+'a';
    order = ch + order;
}


string findOrder(string dict[],int n,int k){
    vector<vector<int>> graph(k);

    for(int i=0;i<n-1;i++){
        string w1 = dict[i];
        string w2 = dict[i+1];
        for(int j=0; j<min(w1.length(),w2.length()); j++){
            if(w1[j] != w2[j]){
                graph[w1[j] - 'a'].push_back(w2[j] - 'a');
                break;
            }
        }
    }

    vector<int> vis(k,0);
    string order = "";
   for(int i=0; i<k;i++){
    if(!vis[i]){
         dfs(graph,vis,i,order);
    }
   }
   return order;
}


int main()
{
   string dict[] = {"baa", "abcd", "abca", "cab","cad"};
   int n=5; //string size
   int k=4; // num of alphabets used(a,b,c,d)

   string str  = findOrder(dict,n,k);
   cout<<str;
}
