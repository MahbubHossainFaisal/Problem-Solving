#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for(int i=0;i<s.size();i=i+2)
    {
       if(s[i]==49){
        one++;
       }
       if(s[i]==50){
        two++;
       }
       if(s[i]==51){
        three++;
       }
    }
    //cout<<one<<endl<<two<<endl<<three<<endl;
    int j=0;
 
        if(one != 0){
            while(one!=0){
            s[j]='1';
            j=j+2;
            one--;
            }
        }
        if(two != 0){
            while(two!=0){
            s[j]='2';
            j=j+2;
            two--;
            }
        }
        if(three!=0){
            while(three!=0){
            s[j]='3';
            j=j+2;
            three--;
            }
        }
 
    cout<<s;
    return 0;
}