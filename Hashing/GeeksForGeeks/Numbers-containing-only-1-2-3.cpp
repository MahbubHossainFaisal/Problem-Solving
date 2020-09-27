
/*

problem Link: https://practice.geeksforgeeks.org/problems/numbers-containing-1-2-and-3/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<array>

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector <int> result;
        int k=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }



        for(int i=0;i<n;i++)
        {
                int x=a[i];
                int y=a[i];

            while(x>0)
            {
                int res=x%10;

                if(res==1 || res==2 || res==3)
                {
                    x/=10;

                }
                else{
                    break;
                }

                if(x==0)
                {

                    result.push_back(y);


                }

            }
    }

            if(result.size()==0)
           {
                cout<<-1<<endl;
           }
        else{

                sort(result.begin(),result.end());
         for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
        }

        }
        return 0;
}
