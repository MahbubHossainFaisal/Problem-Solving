#include <bits/stdc++.h>
using namespace std;

bool* sieve(int n){
    bool *arr = new bool(n+1);

    for(int i=0; i<=n; i++){
        arr[i] = 1;
    }

    arr[0] = 0;
    arr[1]= 0;
    //arr[2]=1;
    for(int i=2; i*i<=n; i++){
        for(int j=i*2; j<=n; j+=i){
            arr[j] = 0;
        }
    }

    return arr;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>> n;


        bool *arr = sieve(n);
        for(int i=1; i<=n; i++){
            cout<<i<<"-------"<<arr[i]<<" ";
        }
        cout<<endl;
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(arr[i] == 0){
                cout<<i<<" Not prime"<<endl;
            }
            else{
                cout<<i<<" Prime"<<endl;
            }
        }



    }
    return 0;
}
