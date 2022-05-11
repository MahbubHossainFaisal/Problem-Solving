class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string ans = "";
        
        string minStr = *min_element(strs.begin(), strs.end());
        
        for(int i=0; i<minStr.size(); i++){
            for(int j=0; j<strs.size(); j++){
                if(minStr[i] != strs[j][i])
                    return ans;
            }
            ans.push_back(minStr[i]);
        }
        
        return ans;
    }
};