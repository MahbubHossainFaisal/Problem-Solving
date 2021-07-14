#include<bits/stdc++.h>
using namespace std;

set <string> s;

void permutationWithCaseChange(string input,string output)
{
    if(input.size() == 0){
        cout<<output<<" ";
        return;
    }
    string output1 = output;
    string output2 = output;
    output1.push_back(input[0]);
    output2.push_back(toupper(input[0]));
    input.erase(input.begin() + 0);

    permutationWithCaseChange(input,output1);
    permutationWithCaseChange(input,output2);
    return;

}


int main()
{
    string input,output;
    cin>>input;

    
    permutationWithCaseChange(input,output);

    return 0;
   
}
