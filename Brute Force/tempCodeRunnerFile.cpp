#include <iostream>
using namespace std;

int main(){
    int n,d,temp,k=0;
   // cout<<"How many elements do you want to store in an array?"<<endl;
    cin>>n;
    int a[n];
    cin>>d;
    //cout<<"Give the array elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   // cout<<"How many times you want to rotate the array?"<<endl;



    for(int i=0;i<d;i++)
    {  temp=a[k];
        for(int j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
        temp=0;

    }

 //   cout<<"Here is your array after rotating : "<<endl;

    for(int i=0;i<n;i++)
 