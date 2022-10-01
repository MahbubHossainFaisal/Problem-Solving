#include <bits/stdc++.h>
class Solution {
public:
   
    string reverseWords(string str) {
     vector<string> arr;
        string temp="";
       
        for(int i=0; i<str.size(); i++){
            if(str[i] != ' '){
                temp+=str[i];
            }
            else{
               
              if(temp != ""){
                  arr.push_back(temp);
                  temp="";
              }
            }
            }
        
     
       
       arr.push_back(temp); // to add the last word
        string ans="";
    
        for(int i=arr.size()-1; i>=0; i--){
          //  cout<<arr[i]<<endl;
            ans+=arr[i]+' ';
           

        }
        while(ans.front()==' ')ans.erase(ans.begin());
        ans.pop_back();
       return ans;
    }
    
};
