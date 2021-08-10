class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int i=0,j=0;
        if(t==s) return true;
        
        while(i<n){
            if(t[i] == s[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
            if(j==s.size()){
                return true;
            }
        }
        return false;
        
    }
};