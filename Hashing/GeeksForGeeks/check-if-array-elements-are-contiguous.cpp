/*

problem Link:
https://practice.geeksforgeeks.org/problems/check-if-array-contains-contiguous-integers-with-duplicates-allowed/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions
*/

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
        int arr[n];


        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        sort(arr,arr+n);

        //cout<<endl;

        int Count=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i+1]==arr[i] || arr[i+1]==(arr[i]+1))
                {
                    Count++;
                   // cout<<"Count becomes: "<<Count<<endl;
                }

        }
        if(Count==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;




    }
}
