class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y+x;
                st.push(ans);
            }
            else if(tokens[i] == "-"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y-x;
                st.push(ans);
            }
            else if(tokens[i] == "*"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y*x;
                st.push(ans);
            }
            else if(tokens[i] =="/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int ans = y/x;
                st.push(ans);
            }
            else{
                st.push(atoi(tokens[i].c_str()));
            }
        }
        return st.top();
    }
    
};