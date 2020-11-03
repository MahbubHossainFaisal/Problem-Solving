
/*
Problem link: https://practice.geeksforgeeks.org/problems/job-sequencing-problem/0

*/

#include<bits/stdc++.h>
using namespace std;


struct job
 {
     int id;
     int deadline;
     int profit;
 };
 bool compare(job a,job b)
 {
     return (a.profit > b.profit);
 }
void countProfit(job arr[],int m)
{
    sort(arr,arr+m,compare);

    int Count=0;
    int money=0;
    bool time[m]={false};
    for(int i=1;i<m;i++)
    {
        if(time[arr[i].deadline]==false)
        {
            time[arr[i].deadline]=true;
            money=money+arr[i].profit;
            Count++;
        }
        else
        {
            int limit=arr[i].deadline;
            for(int j=limit;j>=1;j--)
            {
                if(time[j]==false)
                {
                    time[j]=true;
                    money=money+arr[i].profit;
                    Count++;
                    break;
                }
            }
        }

    }
    cout<<Count<<" "<<money<<endl;

}

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         job arr[n];

         for(int i=0;i<n;i++)
         {
             int a,b,c;
             cin>>a>>b>>c;
             arr[i].id=a;
             arr[i].deadline=b;
             arr[i].profit=c;
         }

         countProfit(arr,n);
     }
 }
