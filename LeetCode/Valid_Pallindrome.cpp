class Solution {
public:
    bool check(string a, int s ,int e){
        while(s<e){
        if(a[s] != a[e]){
            return false;
        }
          s++;
          e--;
        
        }
        return true;
    }
    bool validPalindrome(string a) {
        int s = 0;
        int e = a.size()-1;
        
        while(s<e){
            if(a[s] != a[e]){
                if(check(a,s+1,e) or check(a,s,e-1)){
                    return true;
                }
                else return false;
            }
            s++;
            e--;
        }
        return true;
    }
};