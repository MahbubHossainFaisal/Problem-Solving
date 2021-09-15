#include <bits/stdc++.h>
using namespace std;



int main()
{

  string s;
  cin>>s;

  int n;
  cin>>n;

  int val[26]={0};
  for(int i=0; i<26; i++){
    cin>>val[i];
  }


  char letters[26];
  int k=97;
  for(int i=0; i<26;i++){
    letters[i]=k++;
  }

  
  map<char,int> mp;
  for(int i=0; i<26; i++){
    mp[letters[i]] = val[i];
  }
  
  

  sort(val,val+26);
  int mx= val[25];
  int sum=0;
  int i;
  int l=1;
  for(i=0; i<s.size(); i++){

    sum = sum + (l*mp[s[i]]);
  
    l++;
  }
  
 
    while(n--){
       
        sum = sum + (l*mx);
        l++;
    }
    cout<<sum;
    return 0;
}
