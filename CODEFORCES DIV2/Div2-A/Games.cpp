#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int home[n];
    int away[n];

    for(int i=0; i<n; i++){
        cin>>home[i];
        cin>>away[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(home[i] == away[j]){
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
  
}