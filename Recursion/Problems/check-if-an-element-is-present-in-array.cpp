
#include<bits/stdc++.h>
using namespace std;


int checkElement(int *arr,int n,int x)
{

    if(n<0)
    {
        return -1;
    } else if(arr[n-1]==x){
        return 1;
    } else {
        return checkElement(arr,n-1,x);
    }


}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter a value to search: "<<endl;
    int x;
    cin>>x;


    cout<<checkElement(arr,n,x);

    return 0;
}
