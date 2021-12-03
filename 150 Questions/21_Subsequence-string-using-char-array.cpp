#include <bits/stdc++.h>
using namespace std;

void subsequence(char arr[],char output[],int i){
    if(arr[0] == '\0'){
        output[i]='\0';
        cout<<output<<endl;
        return;
    }

    subsequence(arr+1,output,i);
    output[i]=arr[0];
    subsequence(arr+1,output,i+1);


    

}
int main()
{
    char arr[100];
    cin>>arr;
    char output[100];
    subsequence(arr,output,0);
    cout<<output;
}