#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
      long long A,B,C;
      cin>>A>>B>>C;
      if((A>B && A<C)|| (A<B && A>C))
      {
          cout<<A;
      }
   else  if((B>A && B<C)|| (B>C && B<A))
   {
       cout<<B;
   }
   else if((C>A && C<B) || (C<A && C>B))
   {
       cout<<C;
   }

    }
}
