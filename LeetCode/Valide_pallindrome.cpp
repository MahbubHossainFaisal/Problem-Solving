class Solution {
   
    
public:
   
    
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(), s.begin(), ::tolower);
        
        int l = 0;
        int r = s.size()-1;
        
        while(l<r){
          while(l<r and !isalnum(s[l])) l++;
          while(l<r and !isalnum(s[r])) r--;
          
          if(s[l] != s[r]) return false;
           
           l++;
           r--;
        }
        return true;
        
    }
};