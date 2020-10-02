#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        int n = s.size(), j = 0,ans = 0;
        unordered_map<char,int>mp;
        for(int i = 0; i < n; i++ ){
            mp[s[i]]++;
            if(mp.size()==k){
                ans = max(ans,i-j+1);
            }
            else if( mp.size() > k ){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    mp.erase(s[j]);
                    ans = max(ans,i-j);
                }
                j++;
            }
        }
        if(ans==0){
            cout << -1 << endl;
        }
        else
            cout << ans << endl;
    }
}
