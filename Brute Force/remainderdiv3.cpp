#include<iostream>
using namespace std;

int main()
{
    int n,x,i=0;
    cin>>n;
    int a[4];

   while(n!=0)
   {
       x=n%10;
       n=n/10;
       a[i]=x;
       i++;
   }
for(int j=3;j>=0;j--)
{
    cout<<a[j];
}

}
