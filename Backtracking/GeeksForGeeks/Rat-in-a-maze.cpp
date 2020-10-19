
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);
vector <string> v;
// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends

void way(int** solution,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string s=solution[i][j];
            v.push_back(s);
        }
    }
}

void maze(int m[MAX][MAX],int n,int** solution,int x,int y)
{
    if(x==n-1 && y==n-1)
    {
        solution[x][y]=1;
        way(solution,n);
        return;
    }
    if(x>=n || x<0 || y>=n || y<0 || m[x][y]==0 || m[x][y]==1)
    {
        return;
    }
    solution[x][y]=1;
    maze(m,n,solution,x-1,y);
    maze(m,n,solution,x+1,y);
    maze(m,n,solution,x,y-1);
    maze(m,n,solution,x,y+1);
    solution[x][y]=0;
}

vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here
    int ** solution =new int*[n];
    for(int i=0;i<n;i++)
    {
        solution[i]=new int*[n];
    }
    maze(m,n,solution,0,0);
    return v;
}
