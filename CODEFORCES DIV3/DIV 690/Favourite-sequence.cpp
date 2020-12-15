
/*
Link: https://codeforces.com/contest/1462/problem/0
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0,j=n-1;
        int ans[n]={0};
        bool flag = true;
       while(i<=j)
       {

              if(flag){
                 cout<<arr[i]<<" ";
                    i++;
                    flag=false;
              }

            else  if(!flag){

             cout<<arr[j]<<" ";
                j--;

                flag=true;
           }



       }
        cout<<endl;
    }
    return 0;
}
