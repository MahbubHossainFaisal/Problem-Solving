#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int *coin = new int[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>coin[i];
        sum=sum+coin[i];
    }

    sort(coin,coin+n);
    int counter=0;
    int numberOfCoins=0;
    for(int i=n-1; i>=0; i--){
        counter += coin[i];
        numberOfCoins++;
        int res = sum-counter;
        if(counter>res)break;
    }
    cout<<numberOfCoins<<endl;

}