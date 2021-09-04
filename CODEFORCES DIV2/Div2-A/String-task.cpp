#include <bits/stdc++.h>
using namespace std;


int main()
{
    string input;
    cin>>input;
    for(int i=0; i<input.size(); i++){
        input[i] = tolower(input[i]);
    }
   // cout<<input<<endl;
    string ans;
    for(int i=0; i<input.size(); i++)
    {
        if(input[i]=='a' or input[i]=='e' or input[i]=='i' or input[i]=='o' or input[i]=='u')
        {
            continue;
        }

        else{
            ans.push_back('.');
            ans.push_back(input[i]);
        }
    }

    cout<<ans;

}