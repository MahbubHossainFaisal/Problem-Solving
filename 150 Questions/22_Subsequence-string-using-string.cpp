#include <bits/stdc++.h>
using namespace std;

void subsequence(string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    //excluding character
    subsequence(input.substr(1),output);
    //including character
    subsequence(input.substr(1),output+input[0]);
    

    

}
int main()
{
   string input;
   cin>>input;
   string output;
   subsequence(input,output);
   cout<<output;

}