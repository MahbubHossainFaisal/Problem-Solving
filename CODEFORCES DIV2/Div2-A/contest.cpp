#include <bits/stdc++.h>
using namespace std;




int main() {

int a,b,c,d;
cin>>a>>b>>c>>d;

int mres1 = (3*a)/10;
int mres2 = a - (a/250)*c;

int mres = max(mres1,mres2);

int vres1 = (3*b)/10;
int vres2 = b - (b/250)*d;

int vres = max(vres1,vres2);

if(mres > vres) cout<<"Misha";
else if( mres < vres) cout<<"Vasya";
else cout<<"Tie";
return 0;
}
