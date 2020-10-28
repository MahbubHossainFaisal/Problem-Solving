
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);

    stack <char> c;

    for(int i=0;i<s.size();i++)
    {
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            c.push(s[i]);
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(s[i]==')'){
                if(c.top()=='(')
                   c.pop();
            }
            else if(s[i]=='}'){
                if(c.top()=='{')
                    c.pop();
            }
            else if(s[i]==']'){
                if(c.top()=='[')
                    c.pop();
            }
        }

    }

    if(c.empty())
    {
        cout<<"parenthesis are valid"<<endl;
    }
    else if(!c.empty())
    {
        cout<<"Parenthesis are invalid"<<endl;
    }



}
