/*
Declaration of Priority queue of min heap:

priority_queue <Type, vector<Type>, ComparisonType > min_heap;

*/

#include <bits/stdc++.h>
using namespace std;


void Omp(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>> Queue;

    for(int i=0;i<n;i++)
    {
        Queue.push(arr[i]);
    }

    int sum=0,Count=0;
    while(Queue.size()>1)
    {
        int first_element=Queue.top();
        Queue.pop();
        int second_element=Queue.top();
        Queue.pop();
         sum=first_element+second_element;
        Queue.push(sum);

        Count+=sum;
    }

    cout<<Count;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Omp(arr,n);
}
