class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows <= 1) return s;
        
        int n = s.size()-1;
        string *arr = new string [numRows];
        
        int row = 0;
        int step = 0;
        
        for (int i=0; i<=n; i++){
            arr[row].push_back(s[i]);
            
            if(row == 0) step = 1;
            
            else if (row == numRows-1) step = -1;
            
            
            
            row = row+step;
        }
        
        string ans = "";
        for(int i=0; i<numRows; i++){
         //   cout<<arr[i]<<endl;
            ans += arr[i];
        }
        
        return ans;
        
    
    }
    
};
