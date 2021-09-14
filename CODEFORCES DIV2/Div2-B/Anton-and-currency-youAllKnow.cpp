#include <bits/stdc++.h>
using namespace std;



int main()
{

    string s;
    cin>>s;
    int lastDigit = s[s.size()-1]-'0';

    int index=-1;
    for(int i=0; i<s.size(); i++){
        int num = s[i]-'0' ;

        if(num%2 == 0 && num<lastDigit){
            index=i;
            break;
        }
       if(num%2 == 0){
            index = i;

        }

    }

    
    if(index==-1){
        cout<<-1<<endl;
    }else{
        swap(s[index],s[s.size()-1]);
        cout<<s<<endl;
    }


    return 0;
}
