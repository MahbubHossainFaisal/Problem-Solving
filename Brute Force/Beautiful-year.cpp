#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    m++;
   while(1){
     int a,b,c,d;
     int n=m;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    if(a != b && a!= c && a!=d && b!=a && b!=c && b != d && c !=a && c!=b && c!=d && d!=a && d!=b && d!=c){
        cout<<m;
        break;
    }
    else {
        m++;
    }
   }

    return 0;
}
