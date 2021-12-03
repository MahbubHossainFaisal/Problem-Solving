#include <bits/stdc++.h>
using namespace std;
void removeConsecutiveChar(char arr[]){
    if(arr[0] == '\0') return ;

    if(arr[1] == arr[0]){
        for(int i=0; arr[i]!='\0'; i++){
            arr[i] = arr[i+1];
        }
        removeConsecutiveChar(arr);
    }
    else{
        removeConsecutiveChar(arr+1);
    }
        
    
    
}

int main()
{
    char arr[100];
    cin>>arr;
    
    removeConsecutiveChar(arr);
    cout<<arr;
}