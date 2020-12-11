
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char arr[n];
        int j=0;

        int character[3]={'a','b','c'};
        for(int i =0;i<n;i++)
        {
            if(i<k){
                arr[i]=character[0];

            }
            else {
                if(arr[i-1]==character[j])
               arr[i]=character[j+1];
               else if(arr[i-1]==character[j+1])
                arr[i]=character[j+2];
                    else
                    arr[i]=character[j];

            }

        }
        for(int i = 0 ; i<n ; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
}
