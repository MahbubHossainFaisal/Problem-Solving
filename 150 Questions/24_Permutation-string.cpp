#include <bits/stdc++.h>
using namespace std;

void permutationString(char arr[],int i){
    if(arr[i] == '\0') {
        cout<<arr<<endl;
        return;
    }

    for(int j=i; arr[j]!='\0'; j++){
        swap(arr[i],arr[j]);
        permutationString(arr,i+1);
        swap(arr[i],arr[j]);
    }
    return;
}

int main()
{
  char arr[100];
  cin>>arr;

  permutationString(arr,0);

  return 0;


}