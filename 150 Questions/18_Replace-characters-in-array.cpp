#include <bits/stdc++.h>
using namespace std;
void replaceChar(char arr[], char key, char newKey){
    if(arr[0] =='\0') return ;

    if(arr[0] == key) arr[0] = newKey;

    replaceChar(arr+1,key,newKey);
    //cout<<arr<<endl;
   return;
}

int main()
{
    char arr[100] ;
    cin>>arr;
    char key;
    cin>>key;
    char newKey;
    cin>>newKey;
    replaceChar(arr,key,newKey);
    cout<<arr;
    return 0;
}