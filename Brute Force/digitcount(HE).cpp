#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    k=0;

    string s;
    cin>>s;

    int strlen=s.length();

    for(j=0;j<strlen;j++)
    {

        if(s[j]=='0')
        {
            ++a;
        }
        if(s[j]=='1')
        {
            ++b;
        }
        if(s[j]=='2')
        {
            ++c;
        }
        if(s[j]=='3')
        {
            ++d;
        }
        if(s[j]=='4')
        {
            ++e;
        }
        if(s[j]=='5')
        {
            ++f;
        }
        if(s[j]=='6')
        {
            ++g;
        }
        if(s[j]=='7')
        {
            ++h;
        }
        if(s[j]=='8')
        {
            ++i;
        }
        if(s[j]=='9')
        {
            ++k;
        }
    }

    cout<<0<<" "<<a<<endl;
     cout<<1 <<" "<<b<<endl;
      cout<<2 <<" "<<c<<endl;
       cout<<3 <<" "<<d<<endl;
        cout<<4 <<" "<<e<<endl;
         cout<<5 <<" "<<f<<endl;
          cout<<6 <<" "<<g<<endl;
           cout<<7 <<" "<<h<<endl;
            cout<<8 <<" "<<i<<endl;
             cout<<9 <<" "<<k<<endl;
}
