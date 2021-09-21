#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    set <int> st;
    
    for(int i=1; i<s.size()-1; i++){
        if(s[i] == ' ' or s[i] ==','){
            continue;
        }
        
            st.insert(s[i]);
        
    }
    int cnt=0;

    for(auto i: st){
        //cout<<char(i)<<endl;
        cnt++;
    }
    cout<<cnt;
    return 0;
}