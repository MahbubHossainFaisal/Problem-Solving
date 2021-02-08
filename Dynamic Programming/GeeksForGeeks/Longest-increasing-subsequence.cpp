#include <bits/stdc++.h>
using namespace std;

int LIS(int *input,int n)
{
    int *output=new int[n];
    output[0]=1;

    for(int i=1;i<n;i++){
        output[i]=1;
        for(int j=i-1;j>=0;j--){
            if(input[j]>=input[i]){
                continue;
            }
            int ans= output[j]+1;
            if(ans>output[i]){
                output[i]=ans;
            }
        }
    }

    int k=0;
    for(int i=0;i<n;i++){
        if(k<output[i]){
            k=output[i];
        }
    }
    delete[] output;
    return k;
}

int main()
{
    int n;
    cin>>n;

    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<LIS(input,n)<<endl;
    delete[] input;
    return 0;

}