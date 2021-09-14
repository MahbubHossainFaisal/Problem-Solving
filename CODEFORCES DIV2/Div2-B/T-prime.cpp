#include <bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;
    long long int num;
    long long int sqNum;

    int arr[1000000]={0};

    for(int i=2; i<1000000; i++){
        for(int j=2; i*j<1000000; j++){
            arr[i*j] = 1;
        }
    }

    while(t--){

        cin>>num;
        sqNum = sqrt(num);

        if(num==1) cout<<"NO"<<endl;
        else if(sqNum*sqNum == num && arr[sqNum] == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }

    return 0;
}
