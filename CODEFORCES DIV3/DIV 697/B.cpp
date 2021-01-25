#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n<2020)
        {
            cout<<"NO"<<endl;
        }
       else if(n==2020 || n==2021)
        {
            cout<<"YES"<<endl;
        }

        else {
            int res2020 =n/2020;
        int sum2020=res2020*2020;

        int remainfrom2020 = n-sum2020;

        int sum2021 = remainfrom2020*2021;
        if(sum2021>n)
        {
            cout<<"NO"<<endl;
        }
        else {
            int remainfrom2021= n-sum2021;
            if(remainfrom2021%2020==0 &&remainfrom2021>=0)
            {
                cout<<"YES"<<endl;
            }
            if(remainfrom2021%2020!=0 && remainfrom2020>=0)
            {
                cout<<"NO"<<endl;
            }
        }



        }

        }






}
