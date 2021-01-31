/*
Subsequence of a string will will be 2 power n , if string size is n;

Suppose we want to get the subsequence of abc
so first we wrote the base case if input string is empty , so return 1 and filled output[0] with ""
then, we will call subsequence function for smaller input of the string.
Say, we had abc input,so we will call for bc input now,then gradually it will be smaller and smaller
Then,for the bc input we will get output[0-3] "",b,c,bc elements in the output array.

so in last we will just copy the array elements again in the next indexes and add an 'a' with them in the first

so,output[4]=a""
   output[5]=ab
   output[6]=ac
   output[7]=abc

   the array size will increase in double , So at last we will return 2*outputarraySize
   from the subsequence function.


*/

#include<bits/stdc++.h>
using namespace std;

int subsequence(string input,string output[])
{
    if(input.empty()){
        output[0]="";
        return 1;
    }

    string smallerString = input.substr(1);
    int smallerSize=subsequence(smallerString,output);

    for(int i=0;i<smallerSize;i++)
    {
        output[i+smallerSize]=input[0]+output[i];
    }
    return 2*smallerSize;
}

int main()
{
    string input;
    cin>>input;
    int n = input.size();
    int sz= pow(2,n);

    string* output = new string[sz];

    int cnt = subsequence(input,output);
    cout<<"Number of subsequence-"<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<output[i]<<endl;
    }

}
