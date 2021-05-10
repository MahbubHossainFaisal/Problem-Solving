class Solution {
public:
    
    string longestPalindrome(string s) {
        if(s.size() <= 1){
            return s;
        }
        int start=0,end=0;
        int left,right;
        int max_length=1;
        int n=s.size();
        
        for(int i=0; i<n-1;i++){
            left=i;
            right=i;
            while(left>=0 && right<n){
                if(s[left] == s[right]){
                    left--;
                    right++;
                }
                else{
                    break;
                }
            }
          int  len = right-left-1;
            if(max_length < len){
                max_length=len;
                start=left+1;
                end = right-1;
            }
        }
        
        
        for(int i=0; i<n-1;i++){
            left=i;
            right=i+1;
            while(left>=0 && right<n){
                if(s[left] == s[right]){
                    left--;
                    right++;
                }
                else{
                    break;
                }
            }
            int len = right-left-1;
            if(max_length < len){
                max_length=len;
                start=left+1;
                end = right-1;
            }
        }
       // cout<<start<<" "<<max_length<<endl;
        
        return s.substr(start,max_length);
    }
};