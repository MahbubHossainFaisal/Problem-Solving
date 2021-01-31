
#include<bits/stdc++.h>
using namespace std;

string getPossibleChar(char c)
{
    if(c=='2'){
        return "abc";
        }
    if(c=='3'){
        return "def";
    }
    if(c=='4'){
        return "ghi";
    }
    if(c=='5'){
        return "jkl";
    }
    if(c=='6'){
        return "mno";
    }
    if(c=='7'){
        return "pqrs";
    }
    if(c=='8'){
        return "tuv";
    }
    if(c=='9'){
        return "wxyz";
    }
    return "";
}

int subsequence(string input,string output[])
{
    if(input.empty()){
        output[0]="";
        return 1;
    }

    string smallerString = input.substr(1);
    int smallerSize=subsequence(smallerString,output);
    string getString = getPossibleChar(input[0]);
    string temp[10000];
    int k=0;

    for(int i=0;i<smallerSize;i++)
    {
        for(int j=0;j<getString.size();j++){
            temp[k]=getString[j] + output[i];
            k++;
        }

    }

    for(int i=0;i<k;i++)
    {
        output[i]=temp[i];
    }
    return smallerSize*getString.size();
}

int main()
{
    string input;
    cin>>input;

    string* output = new string[10000];

    int cnt = subsequence(input,output);
    cout<<"Number of subsequence-"<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<output[i]<<endl;
    }

}
