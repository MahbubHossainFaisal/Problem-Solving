#include<iostream>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--)
  {  int N;
  cin>>N;
  int count=0;
  int x;
          count=count+(N/100);
          N=N%100;
               count=count+(N/50);
               N=N%50;
                count=count+(N/10);
                N=N%10;
                 count=count+(N/5);
                 N=N%5;
                  count=count+(N/2);
                N=N%2;
                 count=count+(N/1);

                 cout<<count<<endl;



  }

}
