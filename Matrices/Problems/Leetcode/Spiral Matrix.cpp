class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int a,b,c,d;
        a=0;
        b=0;
        c=matrix.size();
        d=matrix[0].size();
        int i;
        vector<int> v;
        while( a<c && b<d){
            for(i=b;i<d;i++){
               v.push_back(matrix[a][i]);
            }
            a++;
            
            for(i=a;i<c;i++){
                v.push_back(matrix[i][d-1]);
            }
            d--;
            if(a<c){
                for(i=d-1;i>=b; i--){
                v.push_back(matrix[c-1][i]);
            }
                c--;
            }
            
            if(b<d){
                for(i=c-1;i>=a; i--){
                v.push_back(matrix[i][b]);
            }
                b++;
            }
            
            
        }
        return v;
        
    }
};