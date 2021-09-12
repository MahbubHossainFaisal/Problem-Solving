#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>> n;

    int *input = new int[n];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(input[j] == i){
                cout<<j+1<<" ";
            }
        }
    }

    return 0;

}