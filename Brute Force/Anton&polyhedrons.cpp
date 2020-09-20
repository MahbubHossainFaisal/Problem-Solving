#include <iostream>
using namespace std;
#include<string.h>

int main()
{
    int t;
    cin>>t;
    int sum=0;
    while(t--)
    {
       string str;
       cin>>str;
       if(str=="tetrahedron")
       {
           sum=sum+4;
       }
      else if(str=="Cube")
       {
           sum=sum+6;
       }
       else if(str=="Octahedron")
       {
           sum=sum+8;
       }
       else if(str=="Dodecahedron")
       {
           sum=sum+12;
       }
       else if(str=="Icosahedron")
       {
           sum=sum+20;
       }
    }
    cout<<sum<<endl;
}
