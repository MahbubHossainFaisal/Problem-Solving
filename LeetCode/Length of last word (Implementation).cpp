class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = 0;
        int n = s.size();
        while(i<n){
            if(s[i] != ' '){
                count++;
                i++;
            }
            else{
               while(i<n && s[i] == ' ')  i++;
                if(i == n) return count;
                else count = 0;
            }
        }
        
        return count;
    }
};