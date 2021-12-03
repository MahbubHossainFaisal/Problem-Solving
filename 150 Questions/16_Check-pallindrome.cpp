#include <bits/stdc++.h>
using namespace std;

bool checkPallindrome(string &s){
    if(s.size() == 0) return true;

    if(s[0] != s[s.size()-1]) return false;

    s.erase(0,1);
    if(s.size()>0){
     s.erase(s.size()-1,1);
    }
  // cout<<s<<endl;
    bool smallerInput = checkPallindrome(s);

    return smallerInput;
}

bool checkNumberPallindrom(int arr[],int s,int e){
    if(s>e) return true;

    if(arr[s] != arr[e]) return false;

    bool smallerInput = checkNumberPallindrom(arr,s+1,e-1);

    return smallerInput;
}

int main()
{
    
    string s;
    cin>>s;

    bool res = checkPallindrome(s);

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool res2 = checkNumberPallindrom(arr,0,n-1);


    cout<<res<<endl;
    cout<<res2<<endl;
  return 0;
}