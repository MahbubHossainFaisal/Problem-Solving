#include <bits/stdc++.h>
using namespace std;

void fib(int n,vector <int> &v){
    if(n <= 2) return;
    for(int i=2; i<n; i++){
        int ele = v[i-1]+v[i-2];
        v.push_back(ele);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    fib(n,v);
    cout<<v[n-1]<<" ";

  return 0;


}