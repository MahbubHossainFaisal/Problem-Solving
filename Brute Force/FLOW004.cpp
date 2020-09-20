#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int N,x,sum,count,add;

    while(T--)
    {   cin>>N;
    add=N%10;
    while(N/10!=0)
      {

       N=N/10;
        count=N%10;
      }
      cout<<add+N<<endl;
    }

}
