
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int odd;
    int even;
    int countOdd=0;
    int countEven=0;

    
    for(int i=1;i<=n; i++){
        int x;
        cin>>x;
        if(x%2 == 0){
            even=i;
            countEven++;
        }
        else{
            odd=i;
            countOdd++;
        }
    }
    
    if(countOdd == 1) cout<<odd<<endl;
    else{
        cout<<even<<endl;
    }

}
