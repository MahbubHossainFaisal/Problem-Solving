class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        int cnt=1;
        
        for(int i=3;i<=n;i++){
            s=s+'$';
            string temp="";
            for(int j=1;j<s.size();j++){
                if(s[j] != s[j-1]){
                    temp = temp+to_string(cnt);
                    temp = temp+s[j-1];
                    cnt=1;
                }
                else cnt++;
            }
            s=temp;
        }
        return s;
    }
};