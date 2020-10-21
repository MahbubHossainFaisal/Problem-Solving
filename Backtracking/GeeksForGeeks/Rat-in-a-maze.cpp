
/*
Problem link : https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

*/



// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);

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


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5

bool safe(int row,int col,int m[][MAX],int n,bool visited[][MAX])
{
    if(row==-1 || row==n || col==-1 || col==n || visited[row][col] || m[row][col]==0 )
    {
        return false;
    }
    return true;

}

void path(int row,int col,int m[][MAX],int n,string& paths,vector <string>& possiblePaths,bool visited[][MAX])
{

    if (row == -1 || row == n || col == -1  || col == n || visited[row][col] || m[row][col] == 0)
        return;
    if(row==n-1 && col==n-1)
    {
        possiblePaths.push_back(paths);
        return;
    }
    visited[row][col]=true;

    if(safe(row+1,col,m,n,visited))
    {
        paths.push_back('D');
        path(row+1,col,m,n,paths,possiblePaths,visited);
        paths.pop_back();
    }
    if(safe(row,col-1,m,n,visited))
    {
        paths.push_back('L');
        path(row,col-1,m,n,paths,possiblePaths,visited);
        paths.pop_back();
    }
    if(safe(row,col+1,m,n,visited))
    {
        paths.push_back('R');
        path(row,col+1,m,n,paths,possiblePaths,visited);
        paths.pop_back();
    }
    if(safe(row-1,col,m,n,visited))
    {
        paths.push_back('U');
        path(row-1,col,m,n,paths,possiblePaths,visited);
        paths.pop_back();
    }

    visited[row][col]=false;


}

vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here

    vector<string> possiblePaths;
    string paths;
    bool visited[n][MAX]={false};

    path(0,0,m,n,paths,possiblePaths,visited);

    return possiblePaths;
}
