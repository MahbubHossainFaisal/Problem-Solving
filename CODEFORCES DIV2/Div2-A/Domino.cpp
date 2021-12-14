#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int upperhalf=0;
    int lowerhalf=0;
    bool flag = false;

    int x,y;
    for(int i=1; i<=n; i++){
        cin>>x>>y;

        if(x%2 + y%2 == 1) flag = true; // found a different parity
        upperhalf+=x;
        lowerhalf+=y;
    }
    

    if(upperhalf%2 == 0 && lowerhalf % 2 == 0) cout<<0<<endl;
    else if(upperhalf%2 == 1 and lowerhalf%2 == 1 and flag) cout<<1<<endl;
    else cout<<-1<<endl;

}