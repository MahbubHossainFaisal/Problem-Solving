#include<iostream>
using namespace std;
#include<algorithm>

struct activity
{
    int start;
    int finish;
};

void selection(activity arr[],int n)
{
    sort(arr,arr+n);

    int i=0;
    cout<<"("<<arr[i].start<<","<<arr[i].finish<<"),";

    for(int j=1;j<n;j++)
    {
        if(arr[j].start>=arr[i].finish)
        {
            cout<<"("<<arr[j].start<<","<<arr[j].finish<<"),";
            i=j;
        }
    }
}

int main()
{
    activity a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].start;
        cin>>a[i].finish;
    }

    selection(a,n);





}
