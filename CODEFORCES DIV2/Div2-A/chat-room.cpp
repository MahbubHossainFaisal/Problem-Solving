#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>>s;

    string word = "hello";
    int k=0;
    int cnt =0;
    for(int i=0; i<s.size(); i++){
        
       if(s[i] == word[k]){
        k++;
       }
       if(k==s.size()) break;

    }

    if(k==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}