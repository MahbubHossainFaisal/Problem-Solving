class Solution {
public:
    void solve(string input,string output,vector<string>&v){
        if(input.size()==0){
            v.push_back(output);
            return;
            
        }
        
        if(isalpha(input[0])){
            string output1 = output;
            string output2 = output;
            
            output1.push_back(tolower(input[0]));
            output2.push_back(toupper(input[0]));
            
            input.erase(input.begin() + 0);
            solve(input,output1,v);
            solve(input,output2,v);
            
        }
        else {
            string output1 = output;
            output1.push_back(input[0]);
            input.erase(input.begin()+0);
            
            solve(input,output1,v);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        string input,output;
        input=s;
        vector<string> v;
        solve(input,output,v);
        return v;
    }
};