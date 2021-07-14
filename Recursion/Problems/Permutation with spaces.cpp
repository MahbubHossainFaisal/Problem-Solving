#include<bits/stdc++.h>
using namespace std;

set <string> s;

void printPermutationWithSpace(string input,string output)
{
    if(input.size() == 0){
        cout<<output<<" ";
        return;
    }
    string output1 = output;
    string output2 = output;
    output1.push_back('_'); //let assume the space as *
    output1.push_back(input[0]);
    output2.push_back(input[0]);
    input.erase(input.begin() + 0);

    printPermutationWithSpace(input,output1);
    printPermutationWithSpace(input,output2);
    return;

}


int main()
{
    string input,output;
    cin>>input;

    output.push_back(input[0]);
    input.erase(input.begin()+0);
    printPermutationWithSpace(input,output);

    return 0;
   
}
