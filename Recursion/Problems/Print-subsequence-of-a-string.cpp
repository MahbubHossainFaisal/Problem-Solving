#include <bits/stdc++.h>
using namespace std;


void print_subsequence(string input,string output)
{
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }

    print_subsequence(input.substr(1),output+input[0]);
    print_subsequence(input.substr(1),output);

}

int main()
{
    string input;
    cin>>input;

    print_subsequence(input," ");
}
