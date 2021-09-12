#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>> n;

    int *arr = new int[n+10];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int startPos = -1;
    int endPos = n;
    bool flag = true;


    for(int i=1; i<n; i++){
        if(flag){
            if(arr[i] < arr[i-1]){
                flag= false;
                startPos = i-1;
            }
        }
        else{
           if(arr[i] > arr[i-1]){
             endPos = i;
            break;
           }
        }
    }


    if(startPos!=-1){
        reverse(arr+startPos,arr+endPos);

        for(int i=1;i<n; i++){
            if(arr[i] < arr[i-1]){
                flag = false;
                break;
            }
            else{
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"yes"<<endl;
        if(startPos == -1){
            cout<<"1 1"<<endl;
        }
        else{
            cout<<startPos+1<<" "<<endPos<<endl;
        }
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;

}