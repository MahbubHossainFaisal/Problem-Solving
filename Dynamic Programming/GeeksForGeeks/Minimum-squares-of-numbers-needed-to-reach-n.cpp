#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
unordered_map <int,int> mp;

int min_num(int n,int ps){
    if(n==0) return 0;
    if(n<0) return 0;
    if(mp.count(n)){
        return mp[n];
    }
    int res = INT_MAX;
    for(int i=1;i<=ps;i++){
        if(i*i<=n){
            res=min(res,1+min_num(n-i*i,ps));
        }
    }
    mp[n]=res;
    return res;
}

int main()
{
    int n;
    cin>>n;
    int ps = ceil(sqrt(n));
    //int *arr=new int[n+1]{0};
    cout<<min_num(n,ps);
    
}