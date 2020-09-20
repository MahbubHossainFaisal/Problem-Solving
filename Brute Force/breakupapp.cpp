#include<iostream>
using namespace std;
#include<string>

int main()
{    int t,x;
      cin>>t;
      x=t;

    string *G=new string[(t+1)/2];
    string *M=new string[(t+1)/2];
    int i,j;
    i=0;
    j=0;

    while(t--)
    {
        cin>>G[i];
        i++;
        cin>>M[j];
        j++;
    }
   for(int k=0;k<x;k++)
   {
       cout<<G[k]<<endl;
       cout<<M[k]<<endl;

   }

}
