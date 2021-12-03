#include <bits/stdc++.h>
using namespace std;
void removeChar(char arr[], char ele){
    if(arr[0] == '\0') return ;

    if(arr[0] == ele){
        for(int i=0; arr[i]!='\0'; i++){
            arr[i] = arr[i+1];
        }
    }
        
    return removeChar(arr+1,ele);
    
}

int main()
{
    char arr[100];
    cin>>arr;
    char ele;
    cin>>ele;
    removeChar(arr,ele);
    cout<<arr;
}