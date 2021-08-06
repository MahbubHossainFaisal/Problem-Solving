
#include <bits/stdc++.h>
using namespace std;

class Solution{
		

		public:
	int minOperations(string str1, string str2) 
	{ 
	    int m = str2.size();
	    int n = str1.size();
	    int matrix[m+1][n+1];
	    int i,j;
	    for(i=0;i<=m;i++){
	        for(j=0;j<=n;j++){
	            if(i==0 or j==0){
	                matrix[i][j] = 0;
	            }
	            else if(str1[i] == str2[j]){
	                matrix[i][j] = 1 + matrix[i-1][j-1];
	            }
	            else{
	                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
	            }
	        }
	    }
	    int lcs = matrix[m][n];
	  if(lcs == 0) return m+n;
	  
	   return (m-lcs)+(n-lcs);
	} 
};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

