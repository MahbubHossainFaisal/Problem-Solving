#include <bits/stdc++.h>
using namespace std;

int convertStringToInt(char arr[], int len){
    if(len == 0) return 0;

    int smallerInput = convertStringToInt(arr,len-1);
    int lastDigit = arr[len-1] - '0';

    int ans = smallerInput*10 + lastDigit;

    return ans;

}

int main()
{
  char arr[100];
  cin>>arr;
  int len = strlen(arr);
  int res = convertStringToInt(arr, len);

  cout<<res<<endl;
  return 0;


}