#include <bits/stdc++.h>
using namespace std;

int countZeroes(int n,int cnt){
    if(n==0){
        return 0;
    }
    
    int smallerInput = countZeroes(n/10,cnt);
    if(n%10 == 0){
       return 1+smallerInput;
    }
    else{
        return smallerInput;
    }

}


int main()
{
    int n;
    cin>>n;
    int cnt =0;
    int res = countZeroes(n,cnt);
   
    cout<<res;
   return 0;
}