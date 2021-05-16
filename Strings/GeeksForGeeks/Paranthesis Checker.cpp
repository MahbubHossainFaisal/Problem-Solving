
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    bool ispar(string x)
    {
      
        stack <char> s;
        int i;
        for( i=0; i<x.size();i++){
            if(x[i] == '[' || x[i] == '{' || x[i] == '('){
                s.push(x[i]);
            }
            else{
                if(s.empty()){
                    break;
                }
                char check = s.top();
                if(check == '[' && x[i]==']'){
                    s.pop();
                }
                else  if(check == '{' && x[i]=='}'){
                    s.pop();
                }
                else  if(check == '(' && x[i]==')'){
                    s.pop();
                }
                else{
                    break;
                }
            }
        }
        if(s.empty() && i==x.size()) return true;
        else return false;
    }

};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  