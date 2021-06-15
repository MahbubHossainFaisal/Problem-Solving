
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    int dist[n] = {0};
        //n-1 iteration for finding shortest distances //among nodes
        for(int i = 0; i < n - 1; i++)
        {
            bool element_isUpdating = false;
            
            for(auto edge: edges)
            {
                int u = edge[0];
                int v = edge[1];
                int w = edge[2];
                
                if(dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    
                   element_isUpdating = true;
                }
            }
            // if elements are not updated it won't update //after any other iteration
            if(!element_isUpdating)
            {
                break;
            }

            //Then if we print the dist vector
            //those elements will be our shortest path
            //distance from src to other nodes
        }

        //Last iteration for checking if there is any
        //negative cycle
	    for(auto edge: edges)
        {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
           if(dist[u] + w < dist[v])
            {
                return 1;
            }
        }
        
        return 0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends