
#include <bits/stdc++.h>
using namespace std;

void removeX(char arr[],char X)
{
    if(arr[0]=='\0')
    {
        return;
    }
    if(arr[0] != X)
    {
        removeX(arr+1,X);
    }
    else
    {
        int i=1;
        for(;arr[i]!='\0';i++)
        {
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        removeX(arr,X);
    }
}

int main()
{
    char arr[100];
    cout<<"Enter the string: "<<endl;
    cin>>arr;
    char X;
    cout<<"Enter the character to delete: "<<endl;
    cin>>X;
    removeX(arr,X);
    cout<<arr;
}
