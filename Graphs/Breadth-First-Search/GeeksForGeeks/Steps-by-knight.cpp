
/*
Problem link: https://practice.geeksforgeeks.org/problems/steps-by-knight/0
*/

#include <bits/stdc++.h>
using namespace std;
int target;
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

int targetX,targetY;

int m=target+1;


int BFS(int x,int y,int n,int visited[][m],int dist[][m])
{
    queue<pair<int,int>> q;
    dist[x][y]=0;
    visited[x][y]=1;
    q.push({x,y});

    if(x==targetX && y==targetY)
        return dist[x][y];

    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();

       for(int i=0;i<n;i++)
       {
           if(isValid(curx+dx[i],cury+dy[i],n,visited))
           {
               x=curx+dx[i];
               y=cury+dy[i];

               dist[x][y]=dist[curx][cury]+1;
               visited[x][y]=1;
               q.push({x,y});
                if(x==targetX && y==targetY) return dist[x][y];
           }
       }

    }
}

bool isValid(int x,int y,int n,int visited[][])
{
    if(x<0 || x>n || y<0 ||  y>n) return false;


    if(visited[x][y]==1) return false;

    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n=target;
        int visited[n+1][n+1];
        int dist[n+1][n+1];

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                visited[i][j]=0;
            }
        }
        int x,y;
        cin>>x>>y;

        cin>>targetX>>targetY;


        cout<<BFS(x,y,n,visited,dist)<<endl;
    }
}
