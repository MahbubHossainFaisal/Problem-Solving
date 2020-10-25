/*

problem link:https://practice.geeksforgeeks.org/problems/steps-by-knight/0

*/

#include <bits/stdc++.h>
using namespace std;

#define S 21
int moves = 8;
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int visited[S][S],dist[S][S];

int targetX,targetY;

bool isValid(int x,int y,int n)
{
    if(x<0 || x>n || y<0 ||  y>n) return false;


    if(visited[x][y]==1) return false;

    return true;
}


int BFS(int x,int y,int n)
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

       for(int i=0;i<moves;i++)
       {
           if(isValid(curx+dx[i],cury+dy[i],n))
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



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;


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


        cout<<BFS(x,y,n)<<endl;
    }
}
