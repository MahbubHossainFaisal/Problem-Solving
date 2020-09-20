#include<iostream>
using namespace std;
int main()
{
    int s,d,x,n,y,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {    cin>>s;
    cin>>d;
      if(s<d)
              {
                  cout<<"impossible"<<endl;
                  break;
              }

      for(j=0;j<=s;j++)
      {
          for(k=0;k<=s;k++)
          {
                if(j+k==s && j-k==d)
              {
                  cout<<j<<" "<<k<<endl;
                  break;
              }

          }
      }

    }
}
